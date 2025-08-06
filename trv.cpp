#include<bits/stdc++.h>
using namespace std;


//  Definition for a binary tree node.
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
    void flatten(TreeNode* root) {
        TreeNode *m=root;
        TreeNode *o=root;
        vector<int> vec;
        TreeNode *t=root;
        tree_traverse(vec,o);
        for(int i=0;i<vec.size();i++){
            if(m->val!=vec[i]){
            m->val=vec[i];}
            if(m->left!=nullptr){
                m->left=nullptr;
            }
            if(i!=vec.size()-1){
            if(m->right==nullptr){
                m->right=new TreeNode(vec[i]);
            }

            m=m->right;}

        }
    }
    void tree_traverse(vector<int> &a,TreeNode *root){
        if(root==nullptr){
            return;
        }
        a.push_back(root->val);
        tree_traverse(a,root->left);
        tree_traverse(a,root->right);
    }
    
};

int main(){
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(5);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(4);
    root->right->right=new TreeNode(6);
    Solution obj;
    obj.flatten(root);    
}
