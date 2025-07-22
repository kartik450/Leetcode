#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int> v;
        for(int x:nums1){
            mp[x]++;

        }
        for(int x:nums2){
            if(mp[x]>0){
                v.push_back(x);
                mp[x]--;
            }

        }
        return v;
        
    }
};

int main(){
    Solution obj;
    vector<int> vec1={1,2,2,1};
    vector<int> vec2={2,2};
    vector<int> vec3;
    vec3=obj.intersect(vec1,vec2);
    for(int x:vec3){
        cout<<x<<" ";
    }
}
