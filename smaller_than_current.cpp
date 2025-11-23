#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            vec.push_back(count);
        }
        return vec;
    }
};

int main(){
    Solution obj;
    vector<int> vec={8,1,2,2,3};
    vector<int> v;
    v=obj.smallerNumbersThanCurrent(vec);
    for(int x:v){
        cout<<x<<" ";
    }
    return -1;
}