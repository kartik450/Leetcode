#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFreqSum(string s) {
        int hash[26]={0};
        for(char x:s){
            hash[(int)(x)-97]++;
        }
        char ar[5]={'a','e','i','o','u'};
        int max_vov=0;
        for(int i=0;i<5;i++){
            if(hash[((int)(ar[i]))-97]>max_vov){
                max_vov=hash[((int)(ar[i]))-97];
            }
        }
        for(int i=0;i<5;i++){
            hash[((int)(ar[i]))-97]=0;
        }
        int max_conso=0;
        for(int i=0;i<26;i++){
            if(hash[i]>max_conso){
                max_conso=hash[i];
            }
        }
        return (max_vov+max_conso);
    }
};

int main(){
    Solution obj;
    cout<<obj.maxFreqSum("aeiaeia");

}