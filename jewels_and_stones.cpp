#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        for(char c:stones){
            mp[c]++;
        }
        int count=0;
        for(char c:jewels){
            if(mp[c]>0){
                count+=mp[c];
            }
        }
        return count;
    }
};

int main(){
    Solution obj;
    cout<<obj.numJewelsInStones("z","ZZ");
    return 0;
}