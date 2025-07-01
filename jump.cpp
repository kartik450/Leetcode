#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0;
        while(nums[i]!=0){
            if(i>=nums.size()-1){
                return true;
            }
            i+=nums[i];
        }
        return false;
    }
};
int main(){
    Solution obj;
    vector<int> vec={3,2,1,0,4};
    cout<<obj.canJump(vec);

}