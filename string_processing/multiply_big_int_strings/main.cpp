#include <string>
#include <vector>
std::string solution(const std::string &num1, const std::string &num2) 
{
    if (num1 == "0" || num2 == "0") return "0";
    std::vector<int> result(num1.size() + num2.size(), 0);
    
    for(int i = num1.size() - 1; i >= 0; i--)
    {
        for(int j = num2.size() - 1; j >= 0; j--)
        {
            int n1 = num1[i] - '0';
            int n2 = num2[j] - '0';
            int multiply = n1 * n2;
            result[i + j + 1] += multiply;
        }
    }
    for(int k = result.size() - 1;  k > 0; k--)
    {
        if(result[k]>9)
        {
            result[k - 1] += result[k] / 10;
            result[k] %= 10;
        }
    }
    std::string product;
    bool leadingZero = true;
    for(const auto & elem : result)
    {
        if (leadingZero && elem == 0) continue;
        leadingZero = false;
        product += std::to_string(elem);
    }
    if(product.empty()) return "0";
    return product;
}