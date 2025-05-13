#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> ch;
        for(char c:s){
            if(c>=65 && c<=91){
                ch.push_back(c+32);
            }
            else if(c>=97 && c<=123){
                ch.push_back(c);
            }
            
        }
        int x=0,y=ch.size()-1;

        for(int i=0;i<ch.size();i++){
            if(ch[x]!=ch[y]){
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
};
int main(){
    Solution obj;
    string s="race a car";
    cout<<obj.isPalindrome(s);
    return 0;
}