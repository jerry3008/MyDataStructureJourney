#include "solution.hpp"

void CreditCardPayment::processPayment(double amount) {
    std::cout << "Processing " << amount << " payment through credit card." << std::endl;
}

void PayPalPayment::processPayment(double amount) {
    std::cout << "Processing " << amount << " payment through PayPal." << std::endl;
}

void StripePayment::processPayment(double amount)
{
    std::cout << "Processing " << amount << " payment through StripePayment." << std::endl;
}
void CryptoPayment::processPayment(double amount)
{
    std::cout << "Processing " << amount << " payment through CryptoPayment." << std::endl;
}
// TODO: Implement the CryptoPayment class
// TODO: Implement the StripePayment class
void PaymentFacade::processPayment(std::string Paymenttype, double amount)
{
    if(amount >  10000)
    {
        std::cout<< "Transaction limit exceeded." << std::endl;
        return;
    }
    if(Paymenttype == "credit_card")
    {
        CreditCard.processPayment(amount);
    }else if (Paymenttype == "paypal") 
    {
        PayPal.processPayment(amount);
    }else if (Paymenttype == "crypto") 
    {
        crypto.processPayment(amount);
    }else if (Paymenttype == "stripe") {
        stripe.processPayment(amount);
    }
    else 
    { 
     std::cout<< "Invalid payment method." << std::endl;
    }
}
// TODO: Implement the PaymentFacade class
// It should support processPayment method with parameters `method` and `amount`.

int main() {
    PaymentFacade paymentFacade;

    paymentFacade.processPayment("credit_card", 500);
    paymentFacade.processPayment("paypal", 9999);
    paymentFacade.processPayment("crypto", 10001);
    paymentFacade.processPayment("stripe", 2500);
    paymentFacade.processPayment("cash", 100);
    paymentFacade.processPayment("paypal", -500);
    paymentFacade.processPayment("crypto", 5000);

    return 0;
}