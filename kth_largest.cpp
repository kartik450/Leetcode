#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        return nums[k-1];
    }
};

int main(){
    vector<int> vec={3,2,1,5,6,4};
    Solution obj;
    cout<<obj.findKthLargest(vec,2);
    return 0;
}