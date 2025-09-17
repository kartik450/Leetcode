#include<bits/stdc++.h>
#include <windows.h>


using namespace std;
int main(){
    cout<<"Start: \n";
    while(1){
    int x;
    cin>>x;
    if(x<0){
        cout<<"Bye";
        return 0;
    }
    if(x==0){
        cout<<"Bye";
        return 0;
    }
    vector<int> vec;
    for(int i=0;i<x;i++){
        int inp;
        cin>>inp;
        vec.push_back(inp);
    }
    int min=vec[0];
    for(int i=0;i<vec.size();i++){
        if(min>vec[i]){
            min=vec[i];
        }
    }
    int mm=0;
    if(min<0){
        mm=-min;
    }
    cout<<endl;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>0){
        for(int j=0;j<mm;j++){
            cout<<" ";
        }
        for(int j=0;j<vec[i];j++){
            cout<<"*";
            Sleep(200);
        }
        }
        
        else if(vec[i]<0){
            for(int j=0;j<mm+vec[i];j++){
                cout<<" ";
            }
            for(int j=0;j<-vec[i];j++){
                cout<<"*";
                Sleep(200);
            }
        }
        cout<<endl;

    }
    cout<<"\nRestart: \n";
}
}