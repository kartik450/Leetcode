#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int x=0,y;
        reverse(nums.begin(),nums.end());
        if(is_sorted(nums.begin(),nums.end())){
            return;
        }
        reverse(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                x=i-1;
                break;
            } 
        }
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[x]){
               y=i;
               break;
            } 
        }
        swap(nums[x],nums[y]);
        reverse(nums.begin()+x+1,nums.end());
        

    }
};

int main(){
    Solution obj;
    vector<int> vec={2,1,5,4,3,0,0};
    obj.nextPermutation(vec);
    for(auto v:vec){
        cout<<v<<" ";
    }
}