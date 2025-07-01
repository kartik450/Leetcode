#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int x=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+x);
        reverse(nums.begin()+x,nums.end());
    }
};
int main(){
    Solution obj;
    vector<int> vec={1,2,3,4,5,6,7};
    obj.rotate(vec,1);
    for(auto x:vec){
        cout<<x<<" ";
    }
}