#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            int carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
};
int main(){
    int a=4,b=5;
    Solution obj;
    cout<<obj.getSum(a,b);
}