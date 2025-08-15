#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        int x=0;
        char y=num[0];
        vector<char> vec;
        for(char c:num){
            if(c==y){
                x++;
            }
            else{
                y=c;
                x=1;
            }
            if(x==3){
                vec.push_back(y);
            }

        }
        if(vec.empty()){
            return "";
        }
        char m=vec[0];
        for(char z:vec){
            if(m<z){
                m=z;
            }
        }
        string vv="";
        for(int i=0;i<3;i++){
            vv+=m;
        }
        return vv;

    }
};

int main(){
    Solution obj;
    cout<<obj.largestGoodInteger("222");
    return 0;
}