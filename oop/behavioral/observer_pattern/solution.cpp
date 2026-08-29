#include "subject.h"
#include "observer.h"


int main() {
    // TODO: Implement the main function to create SecuritySystem and two HomeOwner objects (Alice and Bob)
    // Attach the HomeOwner objects to the SecuritySystem
    // Call detectIntrusion on the SecuritySystem
    // Detach one of the HomeOwner objects from the SecuritySystem
    // Call detectIntrusion on the SecuritySystem
    // Delete the HomeOwner objects
    
    SecuritySystem* securitySystem = new SecuritySystem();
    HomeOwner* alice = new HomeOwner("Alice");
    HomeOwner* Bob = new HomeOwner("Bob");
    securitySystem->attach(alice);
    securitySystem->attach(Bob);
    securitySystem->detectIntrusion();
    securitySystem ->detach(alice);
    
    
    
    securitySystem ->detach(Bob);
    securitySystem->detectIntrusion();

// Later, to clean up:
    delete alice;
    delete Bob;
    delete securitySystem;
        return 0;
}