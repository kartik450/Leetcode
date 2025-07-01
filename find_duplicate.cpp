#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size()==0){
            return -1;
        }
        unordered_map<int,int> mp;
        for(int num:nums){
            mp[num]++;
            if(mp[num]>=2){
                return num;
            }
        }
        return -1;
    }
};
int main(){
    vector<int> vec={1,3,4,2,2};
    Solution obj;
    cout<<obj.findDuplicate(vec);
}