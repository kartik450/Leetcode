#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int x=0;
        for(int i=0;i<arr.size();i++){
            
            if(arr[i]%2==0){
                x=0;
            }
            else{
                x++;
            }
            if(x>=3){
                return true;
            }
        }
        return false;
    }
};
int main(){
    vector<int> vec={1,1,1};
    Solution obj;
    cout<<obj.threeConsecutiveOdds(vec);
}