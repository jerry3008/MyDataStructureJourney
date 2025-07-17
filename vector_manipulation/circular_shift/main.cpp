#include <vector>

// TODO: Implement the solution
std::vector<int> shiftListElements(const std::vector<int>& ls, int shift) 
{
    int n = ls.size();
    std::vector<int>result(n);
    for(int i = 0;  i < n; ++i)
    {
        result[((i+shift)%n+n)%n] = ls[i];
        
    }
    return result; // Return an empty vector for now
}