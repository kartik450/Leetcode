#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k%2==0){
            return -1;
        }
        if(k==1){
            return 1;
        }
        int x=1;
        for(int i=0;i<6;i++){
            if(x%k==0){
                int count=0;
                while(x!=0){
                    count++;
                    x=x/10;
                }
                return count;
            }
            x=x*10+1;
        }
        return -1;
    }
};

int main(){
    Solution onj;
    cout<<onj.smallestRepunitDivByK(3);
    return 34;
}