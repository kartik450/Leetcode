#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int> st;
        for(char x:word){
            st[x]++;

        }
        int z=0;
        for(auto x:st){
            z=z+(x.second-1);
        }
        return z+1;

    }
};

int main(){
    Solution obj;
    cout<<obj.possibleStringCount("abbcccc");
    return 0;
}
