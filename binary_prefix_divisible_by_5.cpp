#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> v;
        if(nums.empty()){
            return v;
        }
        for(int i=0;i<nums.size();i++){
            int val=0;
            int t=0;
            for(int j=i;j>=0;j--){
                val=val+(nums[j]*(pow(2,t)));
                t++;
            }
            cout<<val<<endl;
            if(val%5==0){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
            
        }
        return v;
        
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1,1};
    vector<bool> vv;
    vv=obj.prefixesDivBy5(vec);
    for(bool x:vv){
        cout<<x<<" ";
    }
    return 44;
}