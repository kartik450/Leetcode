#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map <int,bool> mpp;
        for(int i:nums){
            mpp[i]=true;
        }
        vector<int> unique;
        for (auto it : mpp) {
        unique.push_back(it.first);
    }
        sort(unique.begin(),unique.end());
        for(int i=0;i<nums.size();i++){
            if(i<unique.size()){
            nums[i]=unique[i];
        }
            else{
                nums[i]=0;
            }
        }
        return (unique.size());
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1,2};
    cout<<obj.removeDuplicates(vec)<<endl;
    for(auto c:vec){
        cout<<c<<" ";
    }
}
