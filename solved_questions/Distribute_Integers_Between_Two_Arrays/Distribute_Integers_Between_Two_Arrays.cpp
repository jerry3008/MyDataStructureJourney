#include <vector>
using namespace std;


vector<int> distributeIntegers(vector<int> numbers)
{
    vector<int> first, second;
    first.push_back[numbers[0]];
    second.push_back[numbers[1]];

    for(int i = 2; i < numbers.size(); ++i)
    {
        int num = numbers[i];

        int countFirst = 0;
        for(int x : first) if(x > num) countFirst++;

        int countSecond = 0;
        for(int x : second) if(x > num) countSecond++;


        if(countFirst > countSecond)
        {
            first.push_back(num);
        }else if(countSecond > countFirst)
        {
            second.push_back(num);
        }else{
            if(first.size() < second.size())
            {
                first.push_back(num);

            }else if(second.size() < first.size())
            {
                second.push_back(num);
            }else{
                first.push_back(num);

            }
        }
    }
    first.insert(first.end(), second.begin(), second.end());
    return first;
}
