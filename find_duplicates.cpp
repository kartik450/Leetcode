#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> tt;
        for(int b:nums){
            mp[b]++;
        }
        for(auto r:mp){
            if(r.second>1){
                tt.push_back(r.first);
            }
        }
        return tt;

    }
};

int main(){
    Solution obj;
    vector<int> vec={4,3,2,7,8,2,3,1};
    vector<int> v;
    v=obj.findDuplicates(vec);
    for(int x:v){
        cout<<x<<" ";
    }
}