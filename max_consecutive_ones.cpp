#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int ones(vector<int> &vec){
        int max=0;
        int count=0;
        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]==0){
                count=0;
            }
            else{
                count++;
            }
            if(max<count){
                max=count;
            }
        }
        return max;
    }
};

int main(){
    Solution obj;
    vector<int> vec={1,1,0,1,1,1,0,1,1};
    cout<<obj.ones(vec);
}