#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int> &nums, int val)
{
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r)
    {
        if(nums[l]==val){
            nums[l]=nums[r];
            r--;
        } else{
            l++;
        }
    }

    return l;
}
int main()
{
    vector<int> v = {0,1,2,2,3,0,4,2};
    cout << removeElement(v, 2);
    return 0;
}