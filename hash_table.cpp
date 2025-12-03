#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vec={1,2,2,2,3,5,5,5,5,5,5,5,6,0,0};
    map<int,int> mp;
    for(int i=0;i<vec.size();i++){
        mp[vec[i]]++;
    }
    for(auto x:mp){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}