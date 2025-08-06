#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> for_t,for_s;
        for(auto x:s){
            for_s[x]++;
        }
        for(auto x:t){
            for_t[x]++;
        }
        for(auto x:for_t){
            if(for_s[x.first]!=x.second){
                    return false;
                }
        }
        return true;
    }
int main()
{
    cout<<"(0 -> false ... 1-> true) " << isAnagram("abc","abc");

      return 0;
}