#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> vv;
        for(int i=0;i<prices.size();i++){
            int x=0;
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=prices[i]){
                    x=prices[j];
                    break;
                }
            }
            vv.push_back(prices[i]-x);
        }
        return vv;
    }
};

int main(){
    Solution obj;
    vector<int> vec={10,1,1,6};
    vector<int> vv=obj.finalPrices(vec);
    for(int x:vv){
        cout<<x<<" ";
    }
    return 0;
}