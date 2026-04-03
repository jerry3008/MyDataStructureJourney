# Payment Facade Pattern (C++)

This task enhances a legacy payment processing system by introducing a Facade Pattern to unify multiple payment methods behind a single interface.

The existing system already supports credit card and PayPal payments. The new requirement is to add cryptocurrency and Stripe support while keeping the legacy behavior intact and minimizing changes to the current codebase.

## Objective

Design and implement a `PaymentFacade` class that provides a simplified interface for processing payments through all supported methods:

- credit card
- PayPal
- cryptocurrency
- Stripe

The facade should expose a single method:

processPayment(const std::string& method, double amount)

This method selects the correct payment provider based on the method string and calls the corresponding payment handler.

Existing Payment Methods
CreditCardPayment

Method:

processPayment(double amount)

Output:

Processing <amount> payment through credit card.
PayPalPayment

Method:

processPayment(double amount)

Output:

Processing <amount> payment through PayPal.
New Payment Methods
CryptoPayment

Placeholder class for cryptocurrency integration.

Method:

processPayment(double amount)

Output:

Processing <amount> payment through cryptocurrency.
StripePayment

Placeholder class for Stripe integration.

Method:

processPayment(double amount)

Output:

Processing <amount> payment through Stripe.
Invalid Method Handling

If the provided payment method is not supported, print:

Invalid payment method
Design Focus
Use the Facade Pattern to simplify interaction with multiple payment classes
Preserve backward compatibility with the legacy system
Minimize changes to existing payment provider classes
Provide a unified and easy-to-use interface
Expected Outcome

After implementation, the system should:

Route payment requests through a single facade
Support both legacy and new payment methods
Hide internal provider-specific details from the caller
Handle invalid method names gracefully
Key Concepts
Facade Pattern
Encapsulation
Unified interface design
Backward compatibility
Extensible architecture
Build and Run
g++ -std=c++17 oop/payment_facade_pattern/main.cpp -o payment_facade
./payment_facade
Notes
This task belongs under OOP.
Focus on simplifying the caller's interaction with the payment subsystem.
The facade should coordinate existing and new payment providers without exposing unnecessary complexity.
Future payment methods should be easy to add with minimal changes to the calling code.