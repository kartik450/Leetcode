#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        unordered_map<char,int> mp;
        char c=chars[0];
        int cc=0;
        for(char cd:chars){
            if(c!=cd){
                c=cd;
                cc=1;
            }
            mp[c]++;
        }
        int u=0;
        for(auto vv:mp){
            if(vv.second==1){
                u++;
            }
            else{
                if(vv.second<10){
                    u+=2;
                    continue;
                }
                else if(vv.second<100){
                    u+=3;
                    continue;
                }
                else if(vv.second<1000){
                    u+=4;
                    continue;
                }

            }

        }
        
        return u;
        
    }
};

int main(){
    Solution obj;
    vector<char> vec={'a','a','b','b','c','c','c'};
    cout<<obj.compress(vec);
    return 564;
}