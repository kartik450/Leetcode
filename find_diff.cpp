#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        for(char x:t){
            mp[x]++;
        }
        for(char x:s){
            mp[x]--;
        }
        for(auto x:mp){
            if(x.second>0){
                return x.first;
            }
        }
    }
};

int main(){
    Solution obj;
    cout<<obj.findTheDifference("abd","abcd");
}