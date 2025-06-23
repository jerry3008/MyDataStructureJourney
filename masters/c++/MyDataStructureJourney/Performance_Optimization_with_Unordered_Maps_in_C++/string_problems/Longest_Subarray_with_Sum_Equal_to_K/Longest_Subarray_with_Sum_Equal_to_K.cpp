// Problem: Longest Subarray with Sum Equal to K
#include <vector>
using namespace std;
#include <algorithm>
#include <utility>
#include <limits>

vector<int> getLongestSubarray(const vector<int>& array, int k) {
    int left = 0;
    int right = 0;
    long long  sum = 0;
    long long maxLength = 0;
    int bestLeft;
    int bestright;
    while (right < array.size())
    {
        sum += array[right];
        
        while(sum > k)
        {
            sum -= array[left];
            left++;   
        }
        if(sum == k)
        {
            if(right - left + 1 > maxLength)
            {
                maxLength = right - left + 1;
                bestLeft = left;
                bestright = right; 
            }
           
        }
        right++;
    }
    
    if (maxLength > 0) 
    {
        return vector<int>(array.begin() + bestLeft, array.begin() + bestright + 1);
    }
    
    return {};
}