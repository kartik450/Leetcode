#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        int max=0;
        int c=-1;

        for(auto x:mp){
            if(max<x.second){
                max=x.second;
                c=x.first;
            }
        }
        return c;

        
    }
};
int main(){
    vector<int> vec={3,2,3};
    Solution ibj;
    cout<<ibj.majorityElement(vec);
}
