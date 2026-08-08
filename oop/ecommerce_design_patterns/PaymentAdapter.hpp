#ifndef PAYMENTADAPTER_HPP
#define PAYMENTADAPTER_HPP

#include "Payment.hpp"

// TODO: Define a PaymentGateway interface class with a processPayment method
// TODO: Create PayPalAdapter, StripeAdapter, and SquareAdapter classes inheriting from PaymentGateway, using Adapter pattern
class PaymentGateway
{
    public:
    void virtual processPayment(std::string amount) = 0;
    ~PaymentGateway() = default;
};


class PayPalAdapter : public PaymentGateway
{
    PayPal* pay;
    
    public:
    PayPalAdapter(PayPal* p):pay(p){}
    void processPayment(std::string amount)
    {
        pay->makePayment(amount);
    }
    
};
class StripeAdapter : public PaymentGateway
{
    Stripe* stri;
    
    public:
    StripeAdapter(Stripe* s): stri(s){}
    void processPayment(std::string amount)
    {
        stri->handlePayment(amount);
    }
    
};
class SquareAdapter : public PaymentGateway
{
    Square* sqr;
    public:
    SquareAdapter(Square* sq):sqr(sq){}
    void processPayment(std::string amount)
    {
        sqr->processPaymentSquare(amount);
    }
    
};
#endif // PAYMENTADAPTER_HPP