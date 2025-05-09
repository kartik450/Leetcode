#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
    private:
        int findSum(int num){
            int x=0;
            while(num!=0){
                int temp=num%10;
                x=x+temp;
                num/=10;
            }
            return x;
        }
    public:
        int countLargestGroup(int n) {
            unordered_map<int,int> mp;
            int maxSize=0,count=0;

            for(int i=1;i<=n;i++){
                int digitsSum=findSum(i);
                mp[digitsSum]++;
                if(mp[digitsSum]==maxSize){
                    count++;

                }
                else if(mp[digitsSum]>maxSize){
                    maxSize=mp[digitsSum];
                    count=1;
                }
            }
            return count;
            
        }
};

int main(){
    Solution obj;
    cout<<obj.countLargestGroup(13);
}