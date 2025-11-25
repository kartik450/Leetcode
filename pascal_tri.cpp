#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vv;
        vector<int> v;
        for(int i=0;i<numRows;i++){
            if(i==0){
                v.push_back(1);
                vv.push_back(v);
                v.clear();
                continue;
            }
            else if(i==1){
                v.push_back(1);
                v.push_back(1);
                vv.push_back(v);
                v.clear();
                continue;
            }
            else{
                v.push_back(1);
                for(int j=0;j<vv[vv.size()-1].size()-1;j++){
                    v.push_back(vv[vv.size()-1][j]+vv[vv.size()-1][j+1]);
                }
                v.push_back(1);
            }
            vv.push_back(v);
            v.clear();
        }
        return vv;
    }
};

int main(){
    Solution obj;
    vector<vector<int>> vec=obj.generate(5);
    for(auto x:vec){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}