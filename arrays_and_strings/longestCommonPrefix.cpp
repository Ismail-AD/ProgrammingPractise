#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // sb k pehla character check kia first string k first character sy
    // krty gae jab tk koi ek mismatch nae huwa agr huwa to return
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans;
        for (int i = 0; i < strs[0].length(); i++)
        {
            char ch = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {
                if (ch != strs[j][i])
                {
                    return ans;
                }
            }
            ans += ch;
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<string> a = {"flower", "flow", "flight"};
    cout << s.longestCommonPrefix(a) << endl;
    return 0;
}