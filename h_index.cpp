#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int size=citations.size();
        sort(citations.begin(),citations.end());
        for(int i=citations.size()-1;i>=0;i--){
            if(size>=citations[i]){
                return citations.size()-(size-1);
            }
            size--;
        }
        return -1;


    }
};

int main(){
    Solution obj;
    vector<int> vec={1,3,1};
    cout<<obj.hIndex(vec);
    return 99;
}