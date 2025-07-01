#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> zeros;
        int x=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                zeros.push_back(nums[i]);

            }
            else{
                x++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<zeros.size()){
                nums[i]=zeros[i];
            }
            else{
                nums[i]=0;
            }
        }

        
    }
};
int main(){
    Solution obj;
    vector<int> vec={0,1,0,3,12};
    obj.moveZeroes(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}