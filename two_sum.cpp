#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ve;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ve.push_back(i);
                    ve.push_back(j);
                    return ve;
                }
            }
        }
        return ve;
    }
};

int main(){
    Solution obj;
    vector<int> vec={2,7,11,15};
    vector<int> v;
    v=obj.twoSum(vec,25);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}