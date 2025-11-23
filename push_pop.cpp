#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        unordered_map<int,int> mp;
        for(int x:target){
            mp[x]++;
        }
        vector<string> vv;
        for(int i=1;i<=target[target.size()-1];i++){
            if(mp[i]==1){
                vv.push_back("Push");
            }
            else{
                vv.push_back("Push");
                vv.push_back("Pop");
            }
        }
        return vv;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,2,3};
    vector<string> vv;
    vv=obj.buildArray(vec,3);
    for(string x:vv){
        cout<<x<<" ";
    }
    return 0;
}