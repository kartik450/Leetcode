#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        int sum=1;
        while(sum!=0){
            sum=0;
            while(num!=0){
                sum=sum+(num%10);
                num/=10;
            }
            if(sum/10==0){
                return sum;
            }
            else{
                num=sum;
            }
        }
        return sum;
    }

};


int main(){
    Solution obj;
    cout<<obj.addDigits(999);
}