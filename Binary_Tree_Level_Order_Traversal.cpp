#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            TreeNode *t=root;
            while(true){
                if()
            }
        }
};

int main(){
    Solution obj;
    TreeNode *d2=new TreeNode(7);
    TreeNode *d1=new TreeNode(15);
    TreeNode *c2=new TreeNode(20,d1,d2);
    TreeNode *c1=new TreeNode(9);
    TreeNode *root=new TreeNode(3,c1,c2);

    
}