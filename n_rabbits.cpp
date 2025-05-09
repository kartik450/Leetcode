#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;
class Solution {
    public:
        int numRabbits(vector<int>& answers) {
            unordered_set<int> seen;
            vector<int> unique;
            int sum=0;

            for (int val : answers) {
                if (seen.find(val) == seen.end()) {
                    seen.insert(val);
                    unique.push_back(val);
                    
                }
            }
            for(int i=0;i<unique.size();i++)
            {
                sum=sum+unique[i]+1;
            }
            return sum;
        
        }
};

int main()
{
    vector<int> vec={1,1,2};
    Solution obj;
    cout<<obj.numRabbits(vec);
}