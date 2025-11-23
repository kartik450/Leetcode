#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    void subsets(vector<vector<int>> &vecc,vector<int> &vec,int i,vector<int> &v){
        if(i==vec.size()){
            vecc.push_back(v);
            return;
        }
        v.push_back(vec[i]);
        subsets(vecc,vec,i+1,v);

        v.pop_back();
        subsets(vecc,vec,i+1,v);
    }
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        vector<vector<int>> vecc;
        vector<int> v;
        subsets(vecc,nums,0,v);
        
    }
};

int main(){
    Solution obj;
    vector<int> vec={2,3,1,2,4,3};
    cout<<obj.minSubArrayLen(7,vec);

}