#include <iostream>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm/copy.hpp>
#include <boost/range/algorithm/for_each.hpp>
#include <boost/range/adaptors.hpp>

// TODO: Create the within_range functor class
class within_range {
    public:
    within_range (int min, int max) :  min_n(min), max_n(max){}
    
    bool operator()(int value) const
    {
        return value >= min_n && value <= max_n;
    }
    
    
    private:
    int min_n;
    int max_n;
     
     
};

int main() {
    std::vector<int> numbers = {5, 10, 15, 20, 25, 30, 35};
    
    // TODO: Instantiate the functor with a range of [15, 30]
    within_range range(15,30);

    std::vector<int> filtered_numbers;

    // TODO: Use the functor with boost::adaptors::filtered to filter numbers within the range
    auto filtered = numbers | boost::adaptors::filtered(range);
    boost::copy(filtered, std::back_inserter(filtered_numbers));

    std::cout << "Numbers within the range [15, 30]: ";
    // TODO: Use boost::for_each to print the filtered numbers
    boost::for_each(filtered_numbers, [](int num) 
    {
        std::cout << num << " ";
    });
    std::cout << std::endl;

    return 0;
}