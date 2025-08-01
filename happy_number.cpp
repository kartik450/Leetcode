#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        int y=n;
        while(true){
            
            // cout<<"start"<<"\n\n";
            if(y==1){
                return true;
            }
            // cout<<"mid"<<"\n\n";
            if (mp.count(y) && mp[y] >= 2) {
                return false;
            }
            // cout<<y<<"\n\n";
            y=sqr(y);
            mp[y]++;
            
            // cout<<"\n";
        }
        return false;
        
    }
    int sqr(int x){
        int s=0;
        while(x!=0){
            s=s+((x%10)*(x%10));
            x/=10;
        }
        return s;
    }
};

int main(){
    Solution obj;
    cout<<obj.isHappy(19);
    return 0;
}