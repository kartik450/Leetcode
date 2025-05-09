#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            fun(digits, digits.size() - 1);
            return digits;
        }
    
    private:
        void fun(vector<int>& x, int h, int carry = 1) {
            if (carry == 0 || h < 0) return;
    
            if (x[h] == 9) {
                x[h] = 0;
                if (h == 0) {
                    x.insert(x.begin(), 1); 
                } else {
                    fun(x, h - 1, 1);
                }
            } else {
                x[h] += 1;
                carry = 0;
            }
        }
    };
    
int main(){
    Solution obj;
    vector<int> vec={9,9};
    vector<int> x;
    x=obj.plusOne(vec);
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<endl;
    }
    
}