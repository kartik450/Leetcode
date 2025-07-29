#include<bits/stdc++.h>
using namespace std;


// * Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };


// * Definition for a binary tree node.
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
    bool isSubPath(ListNode* head, TreeNode* root) {
        
    }
};


int main(){
    TreeNode *root=new TreeNode(1);
    root->left=new TreeNode(4);
    root->right=new TreeNode(4);
    root->left->right=new TreeNode(2);
    root->left->right->left=new TreeNode(1);
    root->right->left=new TreeNode(2);
    root->right->left->left=new TreeNode(6);
    root->right->left->right=new TreeNode(8);
    root->right->left->right->left=new TreeNode(1);
    root->right->left->right->right=new TreeNode(3);

    ListNode *head=new ListNode(1);
    head->next=new ListNode(4);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(6);

    Solution obj;
    cout<<obj.isSubPath(head,root);
    return 0;

}