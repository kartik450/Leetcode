#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string x;
        int start=0;
        vector<string> v;
        for(int i=0;i<(s.size())/k;i++)
        {
            x=s.substr(start,k);
            v.push_back(x);
            start=start+k;
        }
        if(((s.size())%k)>0){
            int z=s.size()-(((s.size())/k)*k);
            x=s.substr((((s.size())/k)*k),k);
            for(int i=0;i<k-((s.size())%k);i++){
                x=x+fill;
            }
            v.push_back(x);
        }
        return v;
    }
};

int main(){
    Solution obj;
    vector<string> vec;
    vec=obj.divideString("abcdefghijkl",3,'x');
    for(auto x: vec){
        cout<<x<<" ";
    }
}