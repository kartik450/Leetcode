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
        vector<int> preorderTraversal(TreeNode* root) {
            vector<int> vec;
            trav(root,vec);
            return vec;
        }
        void trav(TreeNode* root,vector<int> &x){
            if(root==nullptr){
                return;
            }
            x.push_back(root->val);
            trav(root->left,x);
            trav(root->right,x);

        }

};

int main(){
    Solution obj;
    TreeNode *root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    vector<int> vec;
    vec=obj.preorderTraversal(root);

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    
}