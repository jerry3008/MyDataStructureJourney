#include <string>
#include <unordered_map>
using namespace std;
#include <limits>

int solution(const std::string &s, int K) {
    unordered_map<char, int> counter;
    int max_length = 0;
    int left = 0;
    for(int right = 0; right < s.size(); right++)
    {
        counter[s[right]]++;
        while(counter.size() > K)
        {
            counter[s[left]]--;
            if(counter[s[left]]== 0)
            {
                counter.erase(s[left]);
            }
            left++;
        }
        max_length = std::max(max_length, right - left + 1);
        
    }
    return max_length;
}