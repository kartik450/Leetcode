#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> v;
        for(string x: bank){
            int count=0;
            for(char c:x){
                if(c=='1'){
                    count++;
                }
            }
            if(count>0){
                v.push_back(count);
            }
        }
        int totals=0;
        for(int i=0;i<v.size()-1;i++){
        
            totals=totals+(v[i]*v[i+1]);
        }
        cout<<endl;
        return totals;

    }
};

int main(){
    Solution obj;
    vector<string> vec={"011001","000000","000000","000000"};
    cout<<obj.numberOfBeams(vec);

}