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
            
        }
};

int main(){
    Solution obj;
    TreeNode *r2l=new TreeNode(15);
    TreeNode *r2r=new TreeNode(7);
    TreeNode *r1=new TreeNode(20,r2l,r2r);
    TreeNode *l1=new TreeNode(9);
    TreeNode *root=new TreeNode(3,l1,r1);

    vector<vector<int>> vec;
    vec=obj.levelOrder(root);

}