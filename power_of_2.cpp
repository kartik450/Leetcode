#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==2){
            return true;
        }
        if(n==0){
            return false;
        }
        isPowerOfTwo(n/2);
    }
};
int main(){
    Solution obj;
    cout<<obj.isPowerOfTwo(3);
}
