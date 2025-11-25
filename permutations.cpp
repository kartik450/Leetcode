#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        string x="";
        for(int i=1;i<=n;i++)
        {
            x.append(to_string(i));
        }
        vector<string> v;
        do {
            v.push_back(x);
            if(v.size()==k){
                return v[k-1];
            }
        }while (next_permutation(x.begin(), x.end()));
        
        return "";

    }
};

int main(){
    Solution obj;
    cout<<obj.getPermutation(3,3);
    return 34;
}