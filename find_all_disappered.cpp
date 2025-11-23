#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<int> vv;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]==0){
                vv.push_back(i);
            }
        }
        return vv;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1};
    vector<int> v=obj.findDisappearedNumbers(vec);
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}