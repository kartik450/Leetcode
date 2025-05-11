#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0;
        vector<int> vec;
        vec=unique_vector(nums);
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<nums.size();j++){
                if(vec[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
                return vec[i];
            }
            count=0;
        }
    }
    vector<int> unique_vector(const vector<int>& vec) {
    unordered_set<int> seen;
    vector<int> result;

    for (int num : vec) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            result.push_back(num);
        }
    }
    return result;
}


};

int main(){
    Solution obj;
    vector<int> vec={2,2,3,2};
    cout<<obj.singleNumber(vec);
}