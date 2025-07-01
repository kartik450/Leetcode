#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> b;
        if(original.size()!=m*n){
            return b;
        }
        vector<int> c;
        int p=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                c.push_back(original[p]);
                p++;
            }
            b.push_back(c);
            c.clear();
        }
        // cout<<b.size();
        return b;
    }
};

int main(){
    vector<int> vec={1,2,3};
    Solution obj;
    vector<vector<int>> v=obj.construct2DArray(vec,1,3);
    for(vector<int> x:v){
        for(int y:x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
}