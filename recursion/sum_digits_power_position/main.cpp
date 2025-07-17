#include <cmath>

// TODO: Implement solution
int sumDigitsPower(int n, int pos) 
{
    if(n == 0)
    {
        return 0;
    }
    else 
    {
        int digit = n % 10;
        std::pow(digit, pos);
        auto result  = sumDigitsPower(n / 10, pos + 1);
        return std::pow(digit, pos) + sumDigitsPower(n / 10, pos + 1);
    }
    return 0;
}