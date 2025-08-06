#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void getConcatenation(vector<int> &nums)
    {
        vector<int> ans = nums;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for (auto x : ans)
        {
            cout << x << " ";
        }


    }
};
int main()
{
    Solution s;
    vector<int> a = {1,2,3,4};
    s.getConcatenation(a);

    return 0;
}