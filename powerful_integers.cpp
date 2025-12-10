#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int poww(int x,int u){
        int p=1;
        for(int i=0;i<u;i++){
            p=p*x;
        }
        return p;
    }
    vector<int> powerfulIntegers(int x, int y, int bound) {
        int i=0,j=0;
        set<int> st;
        vector<int> vec;
        while(poww(x,i)<=bound){
            j=0;
            // cout<<i<<" ";
            while(poww(y,j)<=bound){
                // cout<<i<<" "<<j<<"  "<<poww(x,i)<<" "<<poww(y,j)<<endl;
                if(poww(x,i)+poww(y,j)<=bound){
                    st.insert(poww(x,i)+poww(y,j));
                }
                j++;
            }
            i++;
        }
        for(int i:st){
            vec.push_back(i);
        }
        return vec;


    }
};

int main(){
    Solution obj;
    vector<int> v=obj.powerfulIntegers(2,3,10);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}