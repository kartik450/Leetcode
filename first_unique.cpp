#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(char x:s){
            mp[x]++;
        }
        char unique_char=' ';
        for(auto x:mp){
            if(x.second==1){
                unique_char=x.first;
            }
            // cout<<x.first<<" ";
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==unique_char){
                return i;
            }
        }
        return -1;

    }
};

int main(){
    Solution obj;
    cout<<obj.firstUniqChar("leetcode");
    return 0;
}