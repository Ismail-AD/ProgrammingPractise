#include <bits/stdc++.h>
using namespace std;
vector<int> topKFrequent(vector<int> &nums, int k)
{
    // min heap
    priority_queue<pair<int,int> , vector<pair<int,int>>,greater<pair<int,int>>> q;
    priority_queue<pair<int,int>> q2;
    unordered_map<int,int> mp;
    vector<int> v;
    for(auto x:nums){
        mp[x]++;
    }
    // for(auto a:mp){
    //     q.push({a.second,a.first});
    // }
    // while(q.size()>k){
    //     q.pop();
    // }
    // while(!q.empty()){
    //     v.push_back(q.top().second);
    //     q.pop();
    // }

    // max heap
    for(auto a:mp){
        q2.push({a.second,a.first});
    }
    for(int i=0;i<k;i++){
        v.push_back(q2.top().first);
        q2.pop();
    }
    return v;
}
int main()
{
    
    return 0;
}