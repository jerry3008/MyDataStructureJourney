#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;
int findInfluencer(const std::vector<std::pair<int, int>>& connections) {
 unordered_map<int, unordered_set<int>>network;
 int maxNetwork = 0;
 int influencer = 0;
 for(const auto & value : connections)
 {
    network[value.first].insert(value.second);
    network[value.second].insert(value.first);
 }
 
 for(const auto & network1 : network)
 {
    unordered_set<int>friends;
    for(int f: network1.second)
    {
        friends.insert(f);
    }
    for(int f : network1.second)
    {
        for(int ff : network[f])
        {
            friends.insert(ff);
        }
    }
    friends.erase(network1.first);
    if(friends.size() > maxNetwork)
    {
        maxNetwork = friends.size();
        influencer = network1.first;
    }else if (friends.size() == maxNetwork && network1.first < influencer)
    {
        influencer = network1.first;
    }
 }
 
    // TODO: Implement function
    return influencer;
}