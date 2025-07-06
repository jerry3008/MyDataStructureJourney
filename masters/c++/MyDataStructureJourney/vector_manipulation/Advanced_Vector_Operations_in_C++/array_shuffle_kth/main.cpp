#include <vector>
#include <algorithm>
using namespace std;
std::vector<int> shuffleArray(std::vector<int> nums, int k)
{
    vector <int> front;
    vector <int> back;
    for(int i = 0; i< nums.size(); ++i)
    {
        if((i + 1) % k == 0)
        {
            back.push_back(nums[i]);


        }else{
            front.push_back(nums[i]);
        }

    }
    front.insert(front.end(), back.begin(), back.end());
    return front;
}