#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countTriples(int n) {
        if(n<5){
                return 0;
            }
        int step=1;
        int count=0;
        for(int i=5;i<=n;i++){
            step=1;
            if(i%2==0){
                step=2;
            }
            int x=i*i;
            for(int j=i-step;j>=1;j-=step){
                
                int y=j*j;
                if(x==y){
                    continue;
                }
                int z=x-y;
                // cout<<x<<" "<<y<<endl;
                if(sqrt(z)-int(sqrt(z))==0){
                    count++;
                    cout<<sqrt(y)<<"+"<<sqrt(z)<<"="<<i<<endl<<endl;;
                }
            }
        }
        
        return count;
    }
};

int main(){
    Solution obj;
    cout<<obj.countTriples(18);
}