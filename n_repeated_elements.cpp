#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto x:mp){
            if(x.second>=size/2){
                return x.first;
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,2,3,3};
    cout<<obj.repeatedNTimes(vec);
}