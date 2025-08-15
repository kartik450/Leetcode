#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        int o=0;
        vector<char> vec;
        vector<int> v;
        char hash[150]={0};
        hash['a']++;
        hash['e']++;
        hash['i']++;
        hash['o']++;
        hash['u']++;
        hash['A']++;
        hash['E']++;
        hash['I']++;
        hash['O']++;
        hash['U']++;
        for(char x:s){
            if(hash[x]==1){
            vec.push_back(x);
            v.push_back(o);
            }
            o++;
        }
        for(int i=0;i<v.size();i++){
            s[v[v.size()-i-1]]=vec[i];

        }
        return s;
    }
};

int main(){
    Solution obj;
    // cout<<obj.reverseVowels("IceCreAM");
    cout<<obj.reverseVowels("leetcode");
    return 34546;
}