#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int superPow(int a, vector<int>& b) {
        long long x=0;
        for(int f:b){
            x=x*10+f;
        }
        return pow(a,x);


    }
};
int main(){
    Solution ob;
    vector<int> vec={1,0};
    cout<<ob.superPow(2,vec);
}