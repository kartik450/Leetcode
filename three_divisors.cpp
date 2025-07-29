#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isThree(int n) {
        if((n & n-1)==0 && n!=4){
            return false;
        }
        cout<<"h"<<endl;
        if(n==4){
            return true;
        }
        int x=0;
        for(int i=2;i<=n/2;i++){

            if(n%i==0){
                x++;
            }
            if(x>1){
                cout<<"nigg"<<endl;
                return false;
            }
        }
        cout<<x<<endl<<endl;

        if(x==1){
            return true;
        }
        return false;
    }
};

int main(){
    Solution obj;
    cout<<obj.isThree(9);
    return 0;

}