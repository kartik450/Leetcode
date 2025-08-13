#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // nums.clear();
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1};
    vector<int> vecc=obj.findDisappearedNumbers(vec);
    for(int i=0;i<vecc.size();i++){
        cout<<vecc[i]<<" ";
    }
    return 0;
}