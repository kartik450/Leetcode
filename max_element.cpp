#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int hash[10000]={0};
        for(int x:nums){
            hash[x]++;
        }
        int y=*max_element(hash,hash+10000);
        for(int i=0;i<10000;i++){
            if(hash[i]==y)
            return i;
        }

    }
};
int main(){
    Solution obj;
    vector<int> vec={2,2,1,1,1,2,2};
    cout<<obj.majorityElement(vec);
}