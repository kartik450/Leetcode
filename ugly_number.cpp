#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if(n%4==0){
            return false;
        }
        for(int i=6;i<=n/2;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;

    }
};

int main(){
    Solution obj;
    cout<<obj.isUgly(14);
    return 0;
}