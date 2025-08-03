#include <cmath>
#include <cstddef>
#include <utility>
#include <vector>



std::vector<std::pair<int, double>> solution(const std::vector<int>& numbers) 
{
    size_t n = numbers.size();
    double hold;
    std::vector<std::pair<int, double>>result;
    for(int i = 0; i < n; ++i)
    {
        hold = std::sqrt(numbers[i] * numbers[n - i - 1]);
        hold = std::round(hold * 100) / 100;
        result.push_back({numbers[i], hold});
    }
    // TODO: implement this function
    return result;
}