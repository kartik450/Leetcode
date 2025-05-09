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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vec;
        post(root,vec);
        return vec;

    }
    void post(TreeNode *root,vector<int> &vec){
        if(root==nullptr){return;}
        post(root->left,vec);
        post(root->right,vec);
        vec.push_back(root->val);
    }
};


int main(){
    TreeNode *root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    Solution obj;
    vector<int> vec;
    vec=obj.postorderTraversal(root);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

}