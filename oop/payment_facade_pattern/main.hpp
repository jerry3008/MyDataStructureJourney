#ifndef SOLUTION_HPP_
#define SOLUTION_HPP_

#include <iostream>
#include <string>

class CreditCardPayment {
public:
    void processPayment(double amount);
};

class PayPalPayment {
public:
    void processPayment(double amount);
};

// TODO: Class declarations for CryptoPayment and StripePayment
class CryptoPayment
{
    public:
    void processPayment(double amount);
};

class StripePayment
{
    public:
    void processPayment(double amount);
};
// TODO: Implement the PaymentFacade class and its member declarations

class PaymentFacade
{
    StripePayment stripe;
    CryptoPayment crypto;
    PayPalPayment PayPal;
    CreditCardPayment CreditCard;
    
    public:
    void processPayment(std::string Paymenttype, double amount);
};
#endif  // SOLUTION_HPP_