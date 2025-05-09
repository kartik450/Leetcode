#include<iostream>
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
        bool isSymmetric(TreeNode* root) {
            return isMirror(root->left,root->right);
        }
    private:
        bool isMirror(TreeNode *x,TreeNode *y){
            if(x==nullptr && y==nullptr){
                return true;
            }
            if(x==nullptr || y==nullptr){
                return false;
            }
            return (x->val==y->val) && isMirror(x->left ,y->right) && isMirror(x->right,y->left);
        }
};

int main(){
    Solution obj;
    TreeNode *node6=new TreeNode(6);
    TreeNode *node5=new TreeNode(5);
    TreeNode *node4=new TreeNode(2,node5,node6);
    TreeNode *node3=new TreeNode(6);
    TreeNode *node2=new TreeNode(5);
    TreeNode *node1=new TreeNode(2,node3,node2);
    TreeNode *root=new TreeNode(1,node1,node4);
    cout<<obj.isSymmetric(root);
    
}