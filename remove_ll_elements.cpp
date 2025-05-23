#include<bits/stdc++.h>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // ListNode* x;
        ListNode *c=new ListNode(0);
        c->next=head;
        ListNode *x=c;
        while(x->next!=nullptr){
            if(x->next->val==val){
                x->next=x->next->next;
            }
            else{
                x=x->next;
            }
        }
        return c->next;
    }
        
};

int main(){
    ListNode *r;
        ListNode* root=new ListNode(1);
        root->next=new ListNode(2);
        root->next->next=new ListNode(6);
        root->next->next->next=new ListNode(3);
        root->next->next->next->next=new ListNode(4);
        root->next->next->next->next->next=new ListNode(5);
        root->next->next->next->next->next->next=new ListNode(6);

        Solution obj;
        r=obj.removeElements(root,6);
        while(r!=nullptr){
            cout<<r->val<<" ";
            r=r->next;
        }
}