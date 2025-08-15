#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vv;
        unordered_map<int,int> mp;
        int max=nums[0];
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(max<nums[i]){
                max=nums[i];
            }
        }
        int missing=0;
        for(int i=1;i<=max;i++){
            if(mp[i]>1){
                // cout<<"fgfn";
                vv.push_back(i);
            }
            if(mp[i]==0){
                missing=i;
            }
        }
        if(missing==0){
            missing=max+1;
        }
        vv.push_back(missing);
        return vv;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1};
    vector<int> v=obj.findErrorNums(vec);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}