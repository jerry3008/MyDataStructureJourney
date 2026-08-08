#ifndef PAYMENT_HPP
#define PAYMENT_HPP

#include <iostream>
#include <string>

// TODO: Implement PayPal, Stripe, and Square classes with different payment processing methods
class PayPal
{
    public:
    void makePayment(std::string amount)
    {
        std::cout<< "making payment by paypal"<<std::endl;
    }
    
};
class Stripe
{
    public:
    void handlePayment(std::string amount)
    {
        std::cout<< "making payment by Stripe"<<std::endl;
    }
};
class Square
{
    public:
    void processPaymentSquare(std::string amount)
    {
        std::cout<< "making payment by Square"<<std::endl;
    }
   
};

#endif // PAYMENT_HPP