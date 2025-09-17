#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        void queue(int x){
            int arr[x]={-1};
            static int a=0;
            static int b=0;
            while(1){
            int op;
            cout<<endl<<endl;
            cout<<"Enter a operation:\nPush(1)\nPop(2)\nDisplay(3)\nEnter: ";
            cin>>op;
            
            if(op==1){
                if(b==x-1 && x>1){
                    cout<<"Queue is full.\n";
                    continue;
                }
            
                int u;
                cout<<"Enter Element: ";
                cin>>u;
                push(arr,u,b);
                b++;
            }
            else if(op==2){
                if(a==b){
                    cout<<"Queue is empty\n";
                    continue;
                }
                pop(arr,a);
                a++;
                if(a==x-1 && b==x-1){
                    a=b=0;
                }

            }
            else if(op==3){
                if(a==b){
                    cout<<"Empty queue.\n";
                    continue;
                }
                show(arr,a,b,x);

            }

            }
        }
        void push(int *arr,int x,int b){
            *(arr+b)=x;
        }
        void pop(int *arr,int a){
            *(arr+a)=-1;


        }
        void show(int *arr,int a,int b,int x){
            cout<<"\n";
            for(int i=0;i<a;i++){
                cout<<"|   |";
            }
            for(int i=a;i<=b;i++){
                cout<<"| "<<*(arr+i)<<" |";
            }
            for(int i=b;i<x;i++){
                cout<<"|   |";
            }
            cout<<"\n";
        }
};
int main(){
    Solution obj;
    int x;
    cout<<"Enter size of queue: ";
    cin>>x;
    obj.queue(x);

}