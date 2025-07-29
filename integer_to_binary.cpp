#include<bits/stdc++.h>
using namespace std;
class Binary{
    public:
    int int_to_bin(int n){
        int i=0,ans=0;
        while(n!=0){
            int bit=n&1;
            ans=(bit*power(10,i))+ans;
            // cout<<ans<<endl;
            n=n>>1;
            i++;
        }
        return ans;
    }

    int power(int x,int y){
        if(y==0){
            return 1;
        }
        return x*power(x,y-1);
    }


    int binary_to_int(int n){
        int i=0,ans=0;
        while(n!=0){
            int rem=n%10;
            ans=ans+(power(2,i)*rem);
            n/=10;
            i++;
        }
        return ans;

    }
};

int main(){
    Binary bin;
    int n;
    while(true){
    cout<<"Enter a number: "; 
    cin>>n;
    if(n<0){
        cout<<"Bhaag ja";
        break;
    }
    // cout<<bin.int_to_bin(n)<<endl<<endl;
    cout<<bin.binary_to_int(n)<<endl<<endl;
    }
}