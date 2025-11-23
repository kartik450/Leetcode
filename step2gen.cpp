#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        vector<int> func(vector<int> &v){
            vector<int> result;
            for(int i=0;i<v.size();i++){
                int sig=1;
                for(int j=2;j<(v[i]/2)+1;j++){
                    if(v[i]%j==0){
                        sig=0;
                        break;
                    }

                }
                if(sig==1){
                    int temp=v[i];
                    int nn=0;
                    while(temp>0){
                        nn=nn*10+(temp%10);
                        temp/=10;
                    }
                    if(nn==v[i]){
                        result.push_back(v[i]);
                    }
                }
            } 
            return result;
        }
};

int main(){
    vector<int> vec={22,33,43,12,56,89,122,133,83,131,101,7};
    Solution obj;
    vector<int> vv;
    vv=obj.func(vec);
    for(int x:vv){
        cout<<x<<" ";
    }
    return 4353;
}