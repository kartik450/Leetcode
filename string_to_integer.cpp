#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int myAtoi(string s) {
        int indicator=0;
        int neg=0;
        int number=0;
        for(char x:s){
            if(x==' ' && indicator==0){
                continue;
            }
            else if(x=='-' && indicator==0){
                neg=1;
            }
            else if(x>='0' && x<='9'){
                number=number*10+(int)(x-'0');
                indicator++;
            }
            else{
                if(neg==1){
                return -number;}
                return number;
            }
        }
        
    }
};

int main(){
    string x="    -042";
    Solution obj;
    cout<<obj.myAtoi(x);

}