#include <vector>
#include <unordered_map>
using namespace std;

std::vector<int> solution(const std::vector<int>& player_ids, const std::vector<int>& player_scores, const std::vector<int>& queries) 
{
    unordered_map<int, int>Idscores;
    vector<int>result;
    for (size_t i = 0; i < player_ids.size(); ++i) 
    {
        Idscores[player_ids[i]] = player_scores[i];
    }
    for (int id : queries) 
    {
         if (Idscores.find(id) != Idscores.end())
         {
            result.push_back(Idscores[id]);
         }
    // check if id exists in Idscores
    }   

    return result;
}