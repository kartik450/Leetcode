#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        for(int j=0;j<shifts.size();j++){
            for(int i=0;i<j+1;i++){
                if((s[i]+shifts[j]%26)-'z'>0){
                    s[i]='a'+((s[i]+shifts[j]%26)-'z');
                }
                else{
                    s[i]+=shifts[j];
                }
                
            }
        }
        return s;
    }
};

int main(){
    Solution obj;
    vector<int> vec={10,20,30};
    cout<<obj.shiftingLetters("bad",vec);
    return 3;
}