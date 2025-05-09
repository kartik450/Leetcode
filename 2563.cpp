#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        long long countFairPairs(vector<int>& nums, int lower, int upper) {
            int count=0;
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]<=upper && nums[i]+nums[j]>=lower){
                        count++;
                    }
                }
            }
            return count;
        }
};

int main(){
    vector<int> vec={1,7,9,2,5};
    long long x;
    Solution obj;
    x=obj.countFairPairs(vec,11,11);
    cout<<x;
}
