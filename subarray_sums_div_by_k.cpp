#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sub(vector<vector<int>>vv,vector<int> v,int i){
        if(v.size()==i){
            vv.push_back(v);
        }
        v.push_back()
    }
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<vector<int>> vv;
        vector<int> v;
        sub(vv,v,0);
    }
};

int main(){
    Solution obj;
    vector<int> vec={4,5,0,-2,-3,1};
    cout<<obj.subarraysDivByK(vec,5);
    return 0;
}