#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        if(mp[0]>mp[1]){
            return mp[1];
        }
        else{
            return mp[0];
        }
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,0,0,0,0,1,1,1,1,1,1};
    cout<<obj.findMaxLength(vec);
    return 0;
}