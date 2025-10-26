#include <vector>
#include <unorderd_map>
#include <string>
using namespace std;

int solution(vector<int>fragments, int accessCode)
{
    string code = to_string(accessCode);
    int n = fragments.size();
    vector<string> fragstr(n);
    unorderd_map<string, vector<int>>fragMap;
    for(int i = 0 ; i < fragments.size(); ++i)
    {
        fragstr[i] = to_string(fragments[i]);
        fragMap[fragstr[i]].push_back(i);
    }
    int count = 0;

    for(int split = 1; split < code.size(); ++split)
    {
        string left = code.substr(0, split);
        string right = code.substr(split);
        if(fragMap.count(left) && fragMap.count(right))
        {
            for(int i : fragMap[left])
            {
                for(int j : fragMap[right])
                {
                    if(i != j)
                    {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}