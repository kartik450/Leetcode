#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int sum=0;
        for(auto x:mp){
            if(x.second==1){
                sum+=x.first;
            }
        }
        return sum;
    }
};

int main(){
    Solution ob;
    vector<int> vec={1,2,3,2};
    cout<<ob.sumOfUnique(vec);
    return 0;
}