#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> vv;
        for(string x: tokens){
            int n;
            char y=(char)(x[x.size()-1]);
            if(y>=48 && y<=57){
            vv.push_back(stoi(x));
                continue;
            }
            

            switch(y){
                case '*':
                    n=vv[(vv.size())-1]*vv[(vv.size())-2];
                    break;
                case '+':
                    n=vv[(vv.size())-1]+vv[(vv.size())-2];
                    break;
                case '-':
                    n=vv[(vv.size())-2]-vv[(vv.size())-1];
                    break;
                case '/':
                    n=vv[(vv.size())-2]/vv[(vv.size())-1];
                    break;
                case '%':
                    n=vv[(vv.size())-2]%vv[(vv.size())-1];
                    break;
                }
                vv.pop_back();
                vv.pop_back();
                vv.push_back(n);
        }
        return vv[0];
    }
};
int main(){
    vector<string> vec={"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    Solution obj;
    cout<<obj.evalRPN(vec);
}