#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPossibility(vector<int>& nums){
        int cp1=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && cp1==1){
                return false;
            }
            if(nums[i]>nums[i+1]){
                if(i+2<nums.size()){
                    if(nums[i]>nums[i+2]){
                        cp1=i;
                        continue;
                    }
                }
                cp1=i+1;
            }
        }
        vector<int> vec;
        for(int i=0;i<nums.size();i++){
            if(i==cp1){
                continue;
            }
            vec.push_back(nums[i]);
        }
        if(cp1!=0){
            for(int x=0;x<vec.size()-1;x++){
                if(vec[x]>vec[x+1]){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    Solution obj;
    vector<int> vec={5,7,1,8};
    cout<<obj.checkPossibility(vec);
    return 4;
}