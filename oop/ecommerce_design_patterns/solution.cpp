#include "Payment.hpp"
#include "PaymentAdapter.hpp"
#include "Product.hpp"
#include "ProductComposite.hpp"
#include "ProductDecorator.hpp"

int main() {
    // TODO: Implement the main function as described with creation of instances and method calls
    PayPal* pp = new PayPal();
    PaymentGateway* adapter = new PayPalAdapter(pp);
    adapter->processPayment("50.00");
    
    ProductComponent* phone = new Product("Phone", 699);
    
    
    
    ProductBundle* Bundle = new ProductBundle();
    Bundle -> add(phone);
    
    
    ProductComponent* promoPhone = new DiscountFeature(phone, 50);
    promoPhone->showDetails();
    
    
    delete adapter;
    delete Bundle;
    delete promoPhone;
    return 0;
}