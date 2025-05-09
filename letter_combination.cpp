#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<string> letterCombinations(string digits) {
            vector<string> voc;
            string k2="abc",k3="def",k4="ghi",k5="jkl",k6="mno",k7="pqrs",k8="tuv",k9="wxyz";
            if(digits.size()==0){
                voc.push_back("");
                return voc;
            }
            
            
        }
};
int main(){

    string x="";
    Solution s;
    vector<string> vec;
    vec=s.letterCombinations(x);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}