#include <vector>

std::vector<int> removeCommon(const std::vector<int>& array1, const std::vector<int>& array2) 
{
    std::vector<int>result;
    int i = 0; int j = 0;
    while(i < array1.size() && j < array2.size())
    {
        if(array1[i] < array2[j])
        {
            result.push_back(array1[i++]);
            
        }
        else if(array1[i] > array2[j])
        {
            result.push_back(array2[j++]); 
        }
        else 
        {
            i++;
            j++;
        }
    }
    
        
    while(i < array1.size()) result.push_back(array1[i++]);
    while(j < array2.size()) result.push_back(array2[j++]);
    return result;
}