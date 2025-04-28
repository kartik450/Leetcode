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
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> vec;
            helper(root,vec);
            return vec;
        }
        void helper(TreeNode* root, vector<int>& vec){
            if(root==nullptr) return;
            helper(root->left,vec);
            vec.push_back(root->val);
            helper(root->right,vec);

        }
};

int main()
{
    // TreeNode *n3=new TreeNode(3);
    TreeNode *left=new TreeNode(4);
    TreeNode *right=new TreeNode(5);
    TreeNode *n2=new TreeNode(2,left,right);
    Solution obj;
    vector<int> vec;
    vec=obj.inorderTraversal(n2);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }

}