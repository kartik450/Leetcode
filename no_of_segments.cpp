#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSegments(string s) {
        int count=0,point=0;
        for(char x:s){
           
            if(x!=' ' && point==0){
                count++;
                point =1;
                continue;
            }
            if(x==' '){
                point =0;
            }
            

            
        }
        return count;
    }
};

int main(){
    Solution obj;
    cout<<obj.countSegments("Hello my name is kartik");
}