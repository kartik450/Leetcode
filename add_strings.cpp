#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addStrings(string num1, string num2) {
        string x=num1;
        string y=num2;
        int carry=0,sum=0,p=0,q=0;
        string h="";

        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());\
        // cout << typeid(x[0]).name() << endl;
        for(int i = 0; i < max(x.size(), y.size()); i++){

            if(i<x.size()){
            p=x[i]-'0';}
            else{
                p=0;
            }
            if(i<y.size()){
            q=y[i]-'0';}
            else{
                q=0;
            }
            sum=p+q+carry;
            
            if(sum/10==1){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            h.append(to_string(sum));
            

        }
        if(carry){
            h.append(to_string(carry));
        }
        reverse(h.begin(),h.end());
        return h;
    }
};

int main(){
    string a="45";
    string b="773";
    Solution obj;
    string o=obj.addStrings(a,b);
    cout<<o;
    return 0;
}