#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        int x=0,g=0;
        string r="";
        // char o;
        vector<string> vec;
        for(char c: s){
            if(x==1 && c==' '){
                g=1;
            }
            if(g==1 && c==' '){
                continue;
            }
            
            if(x==0 && c==' '){
                continue;
            }
            
            else if((c>='A' && c<='Z') || (c>='a'&&c<='z') || (c>='1'&&c<='9')){
                r+=c;
                x=1;
            }
            else if(x==1 &&(c==' ') && r!=""){
                vec.push_back(r);
                r="";
            }
        }
        for(string v:vec){
            cout<<v<<endl;
        }
    }
};

int main(){
    Solution obj;
    string x;
    x=obj.reverseWords("a good   example");
    // cout<<x;
}