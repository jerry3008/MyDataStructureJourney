#include <boost/range/distance.hpp>
#include <iostream>
#include <vector>
#include <boost/range/adaptor/filtered.hpp>
#include <boost/range/adaptor/transformed.hpp>
#include <boost/range/numeric.hpp> 

int main() {
    std::vector<int> salaries = {55000, 62000, 74000, 48000, 61000, 82000, 90000};

    // TODO: Filter salaries above 60000
    auto fil_salaries = salaries | boost::adaptors::filtered([](int sal){return sal > 60000;})
    | boost::adaptors::transformed([](int sal){return sal * 0.07; });
    // TODO: Calculate 7% increase by multiplying filtered salaries by 0.07.
    
    // TODO: Get the count of filtered salaries
    auto count_sal = boost::distance(salaries| boost::adaptors::filtered([](int sal){return sal > 60000;}));
    // TODO: Calculate the total increase in salaries
    auto tot_incre = boost::accumulate(fil_salaries, 0.0)/ count_sal;
    auto avg_inc =  tot_incre / count_sal;
    // TODO: Calculate the average increase
    std::cout<<"Average increase in salaries: " <<tot_incre<<std::endl;

    return 0;
}