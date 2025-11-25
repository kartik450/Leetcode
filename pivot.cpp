#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        if(n==1){
            return 1;
        }
        if(n==2){
            return -1;
        }
        int x=0,y=0,sig1=0,sig2=0;
        int cond=n/2;
        while(sig1=0 || sig2==0){
            for(int i=1;i<=cond;i++){
                cout<<i<<" + ";
                x+=i;
            }
            cout<<"  = "<<x<<endl;
            for(int j=cond;j<=n;j++){
                cout<<j<<" + ";
                y+=j;
            }
            cout<<"  = "<<y<<endl<<endl;
            if(x==y){
                return cond;
            }
            else if(x<y){
                cond++;
                sig1=1;
            }
            else{
                cond--;
                sig2=1;
            }
            x=y=0;
        }
        return -1;
    }
};

int main(){
    Solution obj;
    cout<<obj.pivotInteger(4);
    return 0;
}