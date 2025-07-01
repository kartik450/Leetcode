#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> o;
        for(int num:nums){
            o[num]++;
        }
        vector<int> op;
        for(auto pair:o){
            if(pair.second==1){
                op.push_back(pair.first);
            }
        }
        return op;
    }
    
};

int main(){
    Solution obj;
    vector<int> vec={1,2,1,3,2,5};
    vector<int> v;
    v=obj.singleNumber(vec);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}