#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<int> vec;
        for(auto c:mp){
            if(c.second==1){
                vec.push_back(c.first);
            }
            else{
                vec.push_back(c.first);
                vec.push_back(c.first);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<vec.size()){
                nums[i]=vec[i];
            }
            else{
                nums[i]=0;
            }
        }
        return vec.size();
        
    }
};

int main(){
    Solution obj;
    vector<int> vv={1,1,1,2,2,3};
    cout<<obj.removeDuplicates(vv);
}