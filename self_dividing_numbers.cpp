#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vv;
        for(int i=left;i<=right;i++){
            if(i<10){
                vv.push_back(i);
                continue;
            }
            if(i%10==0){
                continue;
            }
            int k=i;
            int indi=0;
            while(k!=0){
                if(i%(k%10)!=0){
                    indi=1;
                    break;
                }
                k/=10;
            }
            // cout<<indi<<endl;
            if(indi==0){
                vv.push_back(i);
            }
        }
        return vv;
    }
};

int main(){
    Solution obj;
    vector<int> vec=obj.selfDividingNumbers(1,22);
    for(int x:vec){
        cout<<x<<" ";
    }
    return 34;
}