#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(char c:magazine){
            mp[c]++;
        }
        for(char c:ransomNote){
            if(mp[c]>0){
                mp[c]--;
                continue;
            }
            return false;

        }
        return true;
    }
};

int main(){
    Solution obj;
    cout<<obj.canConstruct("aa","aba");
}