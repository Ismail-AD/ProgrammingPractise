#include<bits/stdc++.h>
using namespace std;
bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>1) return true;
        }
        return false;
    }
int main()
{
    vector<int> a={1,2,3,1};
    cout<<"(0 -> false ... 1-> true) " <<containsDuplicate(a);
      return 0;
}