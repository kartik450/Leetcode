#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;

        }
};
int main(){
    // ListNode *r;
        ListNode* root=new ListNode(4);
        root->next=new ListNode(5);
        root->next->next=new ListNode(1);
        root->next->next->next=new ListNode(9);

        Solution obj;
        obj.deleteNode(root->next);
        while(root!=nullptr){
            cout<<root->val<<" ";
            root=root->next;
        }
}