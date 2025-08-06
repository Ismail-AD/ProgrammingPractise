#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        pair<int, int> p = {0, 0};
        for (auto x : nums)
        {
            mp[x]++;
        }
        for (auto x : mp)
        {
            if (x.second > p.second)
            {
                p = {x.first, x.second};
            }
        }
        return p.first;
    }
};
int main()
{
    Solution s;
    vector<int> v = {2, 3, 2, 3, 3};
    cout << s.majorityElement(v);
    return 0;
}