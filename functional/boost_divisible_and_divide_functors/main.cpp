#include <iostream>
#include <vector>
#include <boost/range/algorithm/for_each.hpp>
#include <boost/range/adaptor/filtered.hpp>
#include <boost/range/adaptor/transformed.hpp>

// TODO: implement the divisible_by functor
class divisible_by
{
  public:
  divisible_by(int divide) : m_divide(divide){}
  
  bool operator()(int factor)const
  {
    return factor % m_divide == 0;
  }
  
  private:
  int m_divide; 
};

// TODO: implement the divide_by functor
class divide_by
{
  public:
  divide_by(int divide) : m_divide(divide){}
  
  int operator()(int factor)const
  {
    return factor / m_divide;
  }
  
  private:
  int m_divide; 
};

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int factor = 2;

    // TODO: Filter numbers that are divisible by the factor and transform them to their result when divided by the factor
    divisible_by divisible_by_(factor);
    auto result = numbers
    | boost::adaptors::filtered(divisible_by(factor))
    | boost::adaptors::transformed(divide_by(factor));
    // TODO: Print each transformed element
    
    boost::for_each(result, [](int n){
       std::cout<<n; 
    });

    return 0;
}