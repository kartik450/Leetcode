#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
                int rows = matrix.size();
                int cols = matrix[0].size();
            
                std::vector<bool> rowZero(rows, false);
                std::vector<bool> colZero(cols, false);
            
                for (int i = 0; i < rows; ++i) {
                    for (int j = 0; j < cols; ++j) {
                        if (matrix[i][j] == 0) {
                            rowZero[i] = true;
                            colZero[j] = true;
                        }
                    }
                }
            
                for (int i = 0; i < rows; ++i) {
                    if (rowZero[i]) {
                        for (int j = 0; j < cols; ++j) {
                            matrix[i][j] = 0;
                        }
                    }
                }
            
                for (int j = 0; j < cols; ++j) {
                    if (colZero[j]) {
                        for (int i = 0; i < rows; ++i) {
                            matrix[i][j] = 0;
                        }
                    }
                }
            }
            
};

int main(){
    vector<vector<int>> vec={{1,2,3},{4,1,0},{7,8,9}};
    Solution obj;
    obj.setZeroes(vec);
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<(vec[i]).size();j++){
            cout<<vec[i][j]<<"  ";
        }
        cout<<endl;
    }
}