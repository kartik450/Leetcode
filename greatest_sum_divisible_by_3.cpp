#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> vec=nums;
        int sum=0;
        for(int x:vec){
            sum+=x;
        }
        sort(nums.begin(),nums.end());
        int rem=sum%3;
        if(rem==0){
            return sum;
        }
        int check=rem;
        while(check<sum){
            for(int x:nums){
                if(x==check){
                    return sum-check;
                }
                
            }
            check+=3;
        }
        return 0;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,2,3,4,4};
    // Solution obj;
    cout<<obj.maxSumDivThree(vec);
    return 234;
    vec.
}