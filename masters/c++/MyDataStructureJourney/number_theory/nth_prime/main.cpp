#include <vector>
#include <cmath>



int nthPrime(int n) 
{
    int count = 0;
    for(int i = 0;  count < n; ++i)
    {
        if(i >= 2)
        {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); ++j) 
            {
                if (i % j == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) 
            {
                count++;
                if (count == n) return i;
            }
        }
        
    }
    // TODO: Implement the function
    return 0; // Placeholder return value
    
    
}