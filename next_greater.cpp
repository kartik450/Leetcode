#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]+1]>0){
                v.push_back(nums[i]+1);
            }
            else{
                v.push_back(-1);
            }
        }
        return v;
    }
};

int main(){
    vector<int> vec={1,2,1};
    Solution obj;
    vector<int> x=obj.nextGreaterElements(vec);
    for(int c:x){
        cout<<c<<" ";
    }
    return 543;
}