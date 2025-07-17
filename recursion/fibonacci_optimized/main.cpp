#include <unordered_map>

long long fib(int n) {
    static std::unordered_map<int, long long> result;
    if(result.find(n) != result.end())
    {
        return result[n];
    }
    if(n == 1)return 1;
    if(n == 0)return 0;
    if(n > 1)
    {
       result[n] = fib(n - 1) + fib(n - 2);
       return result[n];
    }

    return 0;
}