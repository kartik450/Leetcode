#include<bits/stdc++.h>
using namespace std;
 //* Definition for a binary tree node.
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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==nullptr || (root->left==nullptr))return 0;
        int y=0;
        trav(root,y);
        return y;
    }
     void trav(TreeNode *x, int &sum){
        if(x==nullptr){
            return;
        }
        if(x->left!=nullptr)
        {
            
        
        if(x->left->left==nullptr){
            sum+=x->left->val;
            
        }}
        trav(x->left,sum);
        trav(x->right,sum);


    }
};
int main(){
    TreeNode *head=new TreeNode(9);
    // head->left=new TreeNode(2);
    head->right=new TreeNode(2);
    head->right->left=new TreeNode(0);
    head->right->left->left=new TreeNode(-7);
    head->right->left->left->left=new TreeNode(-1);



    Solution oj;
    cout<<oj.sumOfLeftLeaves(head);
}