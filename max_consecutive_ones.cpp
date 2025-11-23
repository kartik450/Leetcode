#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int count=0;
        for(int x:nums){
            if(x==1){
                count++;
            }
            if(x!=1){
                count=0;
            }
            if(count>max){
                max=count;
            }
        }
        return max;

    }
};

int main(){
    Solution obj;
    vector<int> vec={1,0,1,1,0,1};
    cout<<obj.findMaxConsecutiveOnes(vec);
    return 234;
}