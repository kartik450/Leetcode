#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> vv={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string> v1=words;
        unordered_map<char,int> mp;
        for(int i=0;i<vv.size();i++){
            for(char c:vv[i]){
                mp[c]=i+1;
            }
        }
        vv.pop_back();
        vv.pop_back();
        vv.pop_back();
        for(int i=0;i<v1.size();i++){
            int g=1;
            transform(v1[i].begin(), v1[i].end(), v1[i].begin(), ::tolower);
            int b=mp[v1[i][0]];
            for(char c:v1[i]){
                if(mp[c]!=b){
                    g=0;
                    break;
                }
            }
            if(g==1){
                vv.push_back(words[i]);
            }
        }
        return vv;

    }
};

int main(){
    Solution obj;
    vector<string> vec={"Hello","Alaska","Dad","Peace"};
    vector<string> v;

    v=obj.findWords(vec);
    for(auto x:v){
        cout<<x<<"  ";
    }
    cout<<endl;
    return 0;
}