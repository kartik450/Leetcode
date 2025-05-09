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
        int x=0;
        bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q){
            return true;
        }
        if(!p|| !q){
            return false;
        }
        if(p->val!=q->val){
            return false;
        }

        return (isSameTree(p->left,q->left)&& isSameTree(p->right,q->right));

    }
}; 

int main(){
    Solution obj;
    TreeNode *l=new TreeNode(3);
    TreeNode *r=new TreeNode(5);
    TreeNode *root=new TreeNode(4,l,r);

    TreeNode *a=new TreeNode(3);
    TreeNode *b=new TreeNode(5);
    TreeNode *c=new TreeNode(3,a,b);
    cout<<obj.isSameTree(root,c);

}

