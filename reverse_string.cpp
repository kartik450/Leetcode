#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        // cout<<size<<endl;
        int mid=size/2;
        int x,y;
        x=mid-1;
        if(size%2==0){
        y=x+1;}
        else{
            y=mid+1;
        }
        for(int i=0;i<mid;i++){
            char temp=s[x];
            s[x]=s[y];
            s[y]=temp;
            x--;
            y++;

        }


    }
};
int main(){
    Solution obj;
    vector<char> vec={'H','e','l','l','o'};
    obj.reverseString(vec);
    for(char c:vec){
        cout<<c<<" ";
    }
}

