#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        int x=1;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                if(x==k){
                    return i;
                }
                
                x++;
            }
            if(i==n/2 && x==k){
                return n;
            }
        }
        return -1;
    }
};

int main(){
    Solution obj;
    cout<<obj.kthFactor(4,4);
    return 0;
}