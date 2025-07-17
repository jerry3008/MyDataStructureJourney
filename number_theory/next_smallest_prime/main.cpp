#include <cmath>

bool isPrime(int num) 
{
    if(num <= 1)return false;
    for(int i = 2; i <= sqrt(num); ++i)
    {
        if(num % i == 0 )
        {
            return false;
        }
    }
    
    return true;
}

// TODO: implement the function to find the next prime number after n
int smallestPrime(int n) 
{
    int start = n + 1;
    while(isPrime(start) == !true)
    {
        start += 1;
        
    }
    return start; 
}
