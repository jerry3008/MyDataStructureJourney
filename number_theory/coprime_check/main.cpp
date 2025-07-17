#include <iostream>

bool areCoprime(int a, int b) 
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
        
    }
    if (a == 1)
        return true;
    else
        return false;
}