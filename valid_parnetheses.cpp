#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char,char> mp;
        mp['{']='}';
        mp['(']=')';
        mp['[']=']';
        for(char c:s){
            if(c=='{' || c=='[' || c=='('){
                st.push(c);
                continue;
            }
            if(st.size()){
            if((c==']' && (st.top())!='[') || (c=='}' && (st.top())!='{') || (c==')' && (st.top())!='(')){
                return false;
            }}
            else{
                return false;
            }
            st.pop();
            
        }
        if(st.size()!=0){
            return false;
        }
        return true;
        
    }
};

int main(){
    Solution obj;
    cout<<obj.isValid("{[]}")<<endl;
    
}