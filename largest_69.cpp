#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
        int y=num;
        int size=0;
        while(y!=0){
            size++;
            y=y/10;
        }
        int z=size;
        vector<long long> vec;
        vec.push_back(num);
        for(int i=0;i<z;i++){
            long long ans=change(num,size-1);
            
            vec.push_back(ans);
            size--;
        }
        long long max=vec[0];
        for(long long v:vec){
            if(v>max){
                max=v;
            }
        }
        return max;
    }
    long long change(int num,int ch)
    {
        long long powe=poww(ch);
        long long x=num/powe;
        long long y=num%powe;
        int z=x%10;
        if(z==6){
            x=x/10;
            x=x*10+9;
        }
        else{
            x=x/10;
            x=x*10+6;
        }
        return (x*powe+y);

    }
    long long poww(int pp){
        long long numm=1;
        for(int i=0;i<pp;i++){
                numm=numm*10;
        }
        return numm;
    }
};

int main(){
    Solution obj;
    cout<<obj.maximum69Number(9669);
    return 4456;
}