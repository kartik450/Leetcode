#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        // int largest=-1;
        // int element=-1000;
        int element=-1000;
        for(int i=0;i<k;i++){
            int largest=-1;
            for(auto x:mp){
                if(x.second>largest && x.first!=element){
                    largest=x.second;
                    element=x.first;
                }
            }
            mp[element]=0;
            v.push_back(element);
        }
        return v;

    }
};

int main(){
    vector<int> vec={1,1,1,2,2,3};
    Solution obj;
    vector<int> v=obj.topKFrequent(vec,2);
    for(int x:v){
        cout<<x<<" ";
    }
    return 46;
}