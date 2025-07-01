#include<bits/stdc++.h>
using namespace std;
// Definition for a binary tree node.
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        int mid=nums.size()/2;
        TreeNode *e=new TreeNode(nums[mid]);
        for(int i=mid-1;i>=0;i--){
            tree(e,nums[i]);
        }
        for(int i=mid+1;i<nums.size();i++){
            tree(e,nums[i]);
        }
        return e;

    }
    void tree(TreeNode * x, int v){
        if((x->val)>v){
            if(x->left==nullptr){
            x->left=new TreeNode(v);
            return;
        }
            else{
            tree(x->left,v);}
        }
        if(x->val<v){
            if(x->right==nullptr){
                x->right=new TreeNode(v);
                return;
            }
            else{
                tree(x->right,v);
            }

        }


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
int main(){
    vector<int> nums={-10,-3,0,5,9};
    Solution  obj;
    TreeNode* c;
    c=obj.sortedArrayToBST(nums);
    pre(c);
}