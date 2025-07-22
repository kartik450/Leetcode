#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        // int p=operations[0];
        string y="a";
        string z="";
        for(auto x:operations){
            if(y.size()>=k){
                return y[k-1];
            }
            for(char c:y){
                z=z+(char)(c+x);
            }
            if((y.size()+z.size())>=k){
                return z[(k-y.size())-1];
            }
            y=y+z;
            z="";
        }
        return y[k-1];
    }
};
int main(){
    vector<int> vec={0,0,0};
    Solution obj;
    cout<<endl<<obj.kthCharacter(5,vec);
}