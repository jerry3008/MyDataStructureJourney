#include <vector>
#include <utility>

std::pair<long long, int> maximum_sum(const std::vector<int>& numbers, int k) {
    // TODO: Implement the function to find maximum subarray of size k in numbers
    int left = 0;
    int right = k - 1;
    long long curr_sum = 0;
    int max_start_index = 0;
    for (int i = 0; i < k; ++i) 
    {
        curr_sum += numbers[i];
    }
    long long maxsum = curr_sum;
    for (int i = k; i < numbers.size(); ++i) 
    {
        curr_sum = curr_sum - numbers[i - k] + numbers[i];
        
        if (curr_sum > maxsum) 
        {
            maxsum = curr_sum;
            max_start_index = i - k + 1;
        
        }
    
    }
    return {maxsum, max_start_index}; // Placeholder implementation
}