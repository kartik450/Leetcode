#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int numberOfArrays(vector<int>& differences, int lower, int upper) {
            int x=lower;
            int check=0,count=0;
            for(int i=lower;i<=upper;i++){
                int temp=i;
                for(int j=0;j<differences.size();j++){

                    temp=temp+differences[j];
                    if(temp>upper || temp <lower){

                        
                        if(temp>upper){
                            check=2;
                        }

                        check=1;
                        break;
                    }
                }
                if(check==0){
                    count++;
                }
                else if(check==2){
                    return count;
                }
                check=0;
            }
            return count;
        }
};

int main(){
    Solution obj;
    vector<int> vec={4,-7,2};
    cout<<obj.numberOfArrays(vec,3,6);
    return 0;
}