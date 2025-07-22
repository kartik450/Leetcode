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

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *x=head;
        ListNode *y;
        while(x!=nullptr && x->next!=nullptr){
            int temp=x->val;
            x->val=x->next->val;
            x->next->val=temp;
            x=x->next->next;
        }
        return head;

    }
};
int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    ListNode *p;
    p=obj.swapPairs(head);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
}