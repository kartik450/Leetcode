#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool whole_cap(string word){
        for(char x:word){
            if(x<='Z' && x>='A'){
                continue;
            }
            return false;

        }
        return true;
    
    }

    bool whole_sm(string word){
        for(char x:word){
            if(x<='z' && x>='a'){
                continue;
            }
            return false;

        }
        return true;
    
    }

    bool fir_cap(string word){
        int vv=0;
        if(word[0]<='Z' && word[0]>='A'){
            vv=1;
        }
        if(vv==0){
            return false;
        }
        int ff=1;
        for(char x:word){
            if(ff==1){
                ff=2;
                continue;
            }

            if(x<='z' && x>='a'){
                continue;
            }
            return false;

        }
        return true;
    
    }

public:
    bool detectCapitalUse(string word) {
        if(whole_cap(word) || whole_sm(word) || fir_cap(word)){
            return true;
        }
        return false;
    }
};

int main(){
    Solution obj;
    cout<<obj.detectCapitalUse("AewefS");
    return 0;
}