#include <vector>
#include <map>
#include <set>
#include <string>
using namespace std;

vector<int> solution(const vector<vector<string>>& operations) 
{

    map <string, multiset<int>> library;
    vector<int> result;
    for(const auto & op : operations)
    {
        if(op[0] == "acquisition")
        {
            string cat = op[1];
            int qty = stoi(op[2]);
            int price = stoi(op[3]);
            for(int i =0; i < qty; ++i)
            {
                library[cat].insert(price);
            }
        }else if(op[0]=="checkout")
        {
            string cat = op[1];
            int qty = stoi(op[2]);
            int sum = 0 
            for(int i = 0; i < qty; ++i)
            {
                auto it = library[cat].begin();
                sum += *it;
                library[cat].erase(it);
            }
            result.push_back(sum);
        }else if (op[0] == "reclassify")
        {
            string cat = op[1];
            int qty = stoi(op[2]);
            int oldPrice = stoi(op[3]);
            int newPrice = stoi(op[4]);
            for(int i = 0; i < qty; ++i)
            {
                auto it = library[cat].find(oldPrice);
                library[cat].erase(it);
                library[cat].insert(newPrice);
            }
        }

    }
    return result;
}
