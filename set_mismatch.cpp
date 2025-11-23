#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vec;
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;

        }
        int v=0;
        int w=0;
        for(int i=1;i<=nums.size();i++){
            if(mp[i]>1){
                v=i;
            }
            if(mp[i]==0)
            {
                w=i;
            }
            if(v!=0 && w!=0){
                break;
            }
        }
        vec.push_back(v);
        vec.push_back(w);
        return vec;
        
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1};
    vector<int> g;
    g=obj.findErrorNums(vec);
    for(int x:g){
        cout<<x<<" ";
    }
    return 43;

}