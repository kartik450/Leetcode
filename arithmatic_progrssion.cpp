#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int dif=arr[0]-arr[1];
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]-arr[i+1]!=dif && arr[i]-arr[i+1]!=-dif){
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution obj;
    vector<int> vec={5,3,0};
    cout<<obj.canMakeArithmeticProgression(vec);
    return 0;
}