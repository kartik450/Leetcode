#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;
        vector<int> vvv;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        vvv.push_back(nums[i]);
                        vvv.push_back(nums[j]);
                        vvv.push_back(nums[k]);
                        vv.push_back(vvv);
                        vvv.clear();
                    }
                }
            }
        }
        for(int i=0;i<vv.size();i++){
            for(int j=0;j<vv[i].size();j++){
                
            }
        }
        return vv;
    }
};

int main(){
    Solution onb;
    vector<int> vec={-1,0,1,2,-1,-4};
    vector<vector<int>> vecc;
    vecc=onb.threeSum(vec);

    for(auto x:vecc){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }

    return 32;
}