#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        if(numRows==0){
            return vec;
        }
        vector<int> v={1};
        vec.push_back(v);
        if(numRows==1){
            return vec;
        }
        v.clear();
        v.push_back(1);
        v.push_back(1);
        vec.push_back(v);
        if(numRows==2){
            return vec;
        }
        v.clear();
        vector<int> vv;
        
        for(int j=3;j<=numRows;j++){
            v.push_back(1);
            vv=vec[vec.size()-1];
            for(int i=0;i<vv.size()-1;i++){
                int x=vv[i]+vv[i+1];
                v.push_back(x);
            }
            v.push_back(1);
            vec.push_back(v);
            v.clear();
        }
        return vec;
    }
};

int main(){
    vector<vector<int>> vec;
    Solution obj;
    vec=obj.generate(5);
    for(auto x:vec){
        for(auto y:x){
            cout<<y<<" ";
        }
        cout<<"\n";
    }
    return 0;
}