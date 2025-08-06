#include <bits/stdc++.h>
using namespace std;
// kia i (1) - 1 = 1 hai han
// to count++ krdo aur agy chalo
// kia 100-1 == 4 np
// max lelo current ka or long ka 
// current ko 1 krdo dobara count krein gy
int longestConsecutive(vector<int> &nums)
{
    if (nums.size() <= 1)
        return nums.size();

    sort(nums.begin(), nums.end());
    int maxValue = 1, lenCount = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if(nums[i]==nums[i-1]) continue;
        if(nums[i]==nums[i-1]+1){
            lenCount++;
        } else{
            maxValue = max(maxValue,lenCount);
            lenCount=1;
        }
    }
    return max(maxValue,lenCount);
}
int main()
{
    vector<int> v = {100,4,200,1,3,2};
    cout << "length: " << longestConsecutive(v) << endl;
    return 0;
}