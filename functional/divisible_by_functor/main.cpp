#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/range/adaptor/filtered.hpp>
#include <boost/range/algorithm/for_each.hpp>

class divisible_by 
{
    public:
    divisible_by(int divisor) : m_divisor(divisor){}
    
    
    
        // TODO: Implement the constructor to take an int divisor and initialize m_divisor
    bool operator()(int value)const
    {
        if(value % m_divisor == 0)
        {
            return true;
        }
        return false;
    }
    
        // TODO: Implement the operator() function that checks if a number is divisible by m_divisor

    private:
    int m_divisor;
    // TODO: Declare an int private member variable m_divisor
};

int main() {
    std::vector<int> numbers = {12, 15, 20, 25, 30, 35, 40};

    // TODO: Create an object of divisible_by with a divisor of 5
    divisible_by divisible_by_(5);
    // TODO: Use boost::adaptors::filtered to create a filtered view of numbers
    auto filtered_n = numbers | boost::adaptors::filtered(divisible_by_);
    
    // TODO: Use boost::for_each to print only the numbers that are divisible by 5
    boost::for_each(filtered_n, [](int num){
        std::cout << num <<" is divisible by 5.\n";
    });

    return 0;
}