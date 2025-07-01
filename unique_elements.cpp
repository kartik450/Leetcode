// #include<bits/stdc++.h>
#include<stdio.h>
#include<set>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        
        set<int> s(nums.begin(), nums.end());

        vector<int> unique(s.begin(), s.end());
        if(nums.size()==unique.size()){
            return false;
        }
        else{
            return true;
        }
    }
};
