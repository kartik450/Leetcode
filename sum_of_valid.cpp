#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<int> vec;
        for(int i=0;i<=sqrt(c);i++){
            vec.push_back(i*i);
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec.size();j++){
                if(vec[i]+vec[j]==c){
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    Solution obj;
    cout<<obj.judgeSquareSum(5);
}