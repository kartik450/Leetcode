#include<bits/stdc++.h>
using namespace std;
//  * Definition for a binary tree node.
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
    TreeNode* invertTree(TreeNode* root) {
        tree(root);
        return root;
    }
    void tree(TreeNode* root)
    {
        TreeNode *temp;
        if(root->left ==nullptr && root->right==nullptr){
            return;
        }
        else if(root->left ==nullptr && root->right!=nullptr){
            // root->left;
            root->left=root->right;
            root->right=nullptr;

        }
        else if(root->left !=nullptr && root->right==nullptr){
            // root->left;
            root->right=root->left;
            root->left=nullptr;
            
        }
        else{
            temp=root->left;
            root->left=root->right;
            root->right=temp;
        }
        tree(root->left);
        tree(root->right);

    }
};
void pre(TreeNode * v){
     if(v==nullptr){
        return;
     }
     cout<<v->val<<" ";
     pre(v->left);
     
     pre(v->right);
}
int main()
{
    TreeNode *head=new TreeNode(4);
    head->left=new TreeNode(2);
    head->right=new TreeNode(7);
    head->left->left=new TreeNode(1);
    head->left->right=new TreeNode(3);
    head->right->left=new TreeNode(6);
    head->right->right=new TreeNode(9);

    Solution obj;
    TreeNode *x;
    pre(head);
    cout<<"\n\n";
    x=obj.invertTree(head);
    pre(head);


}