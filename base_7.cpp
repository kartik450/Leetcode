#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        int sig=0;
        if(num<0){
            sig=1;
            num=-num;
        }
        string x="";
        while(num>0){
            x.append(to_string(num%7));
            num/=7;
        }
        reverse(x.begin(),x.end());
        if(sig==1){
            string y="-";
            y.append(x);
            return y;
        }
        return x;
    }
};

int main(){
    Solution obj;
    cout<<obj.convertToBase7(100);
    return 345;
}