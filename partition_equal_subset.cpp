#include<iostream>
using namespace std;
class Solution {
    public:
        bool slove(vector<int>& nums , int i, int x){
            if(x==0){
                return true;
            }
            if(i>=nums.size()){
                return false;
            }
            bool take=false;
            if(nums[i]<=x){
               take= solve(nums,i+1,x-nums[i]);
            }
            bool not_take=solve(nums,i+1,x);
            return t[i][x]=take || not_take;
        }
        bool canPartition(vector<int>& nums) {
            int n=nums.size();
            int S=accumulate(begin(nums),end(nums),0);
            if(S%2!=0){
                return false;
            }

            int x=S/2;
            return solve(nums,0,x);
        }
    };
int main(){

}