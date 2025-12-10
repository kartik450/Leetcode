#include<bits/stdc++.h>
using namespace std;
int main(){
    int first = 0;
    int second = 1;
    int n = 6;
    int ans = 0;
    for(int i = 0; i<n-2; i++){
        ans=first+second;
        first=second;
        second = ans;
    }
    cout<<ans;
}