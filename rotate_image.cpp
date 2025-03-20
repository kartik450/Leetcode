#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            vector<vector<int>> vec(matrix.size(),vector<int>(matrix.size()));
            int x=0,y=0;
            for(int j=0;j<matrix.size();j++){
                y=0;
                for(int i=matrix.size()-1;i>=0;i--){
                    vec[x][y]=matrix[i][j];
                    y++;
                   
                    
                }
                x++;
            }
            for(int i=0;i<vec.size();i++){
                for(int j=0;j<vec.size();j++){
                    matrix[i][j]=vec[i][j];                
                }
            }
        }
    };
int main(){
    vector<vector<int>> vec = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    Solution obj;
    obj.rotate(vec);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec.size();j++){
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }
}