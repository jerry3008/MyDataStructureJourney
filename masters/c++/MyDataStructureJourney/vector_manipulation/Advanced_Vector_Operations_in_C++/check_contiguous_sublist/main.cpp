#include <vector>
#include <iostream>


bool isContiguousSublist(const std::vector<int>& listA, const std::vector<int>& listB) 
{
    int n = listA.size();
    int b = listB.size();
    for(int i = 0; i <= n - b; ++i)
    {
        bool match = true;
        for(int j = 0; j < b; ++j)
        {
            if(listA[i + j] != listB[j])
            {
                match = false;
                break;
            }
        }
         if (match) return true;
    }
    // TODO: implement solution
    return false;
}