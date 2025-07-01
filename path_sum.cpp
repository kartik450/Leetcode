#include<bits/stdc++.h>
using namespace std;
//Definition for a binary tree node.
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        return traverse(root,targetSum,0);
    }
    bool traverse(TreeNode *t,int target,int sum){
        if(t==nullptr){
            return false;
        }
        sum=sum+t->val;
        if(sum==target){
            return true;
        }
        return traverse(t->left,target,sum) ||
        traverse(t->right,target,sum);

        
    }
};
int main(){
    TreeNode *head=new TreeNode(1);
    head->left=new TreeNode(2);
    head->right=new TreeNode(3);
    // head->left->left=new TreeNode(11);
    // head->left->left->left=new TreeNode(7);
    // head->left->left->right=new TreeNode(2);
    // head->right->left=new TreeNode(13);
    // head->right->right=new TreeNode(4);
    // head->right->right->right=new TreeNode(1);

    Solution obj;
    cout<<obj.hasPathSum(head,5);
}