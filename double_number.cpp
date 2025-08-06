#include<bits/stdc++.h>
using namespace std;


 //* Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode *x=reverseList(head);
        ListNode *y=x;
        int z=0;
        int e=z;
        int carry=0;
        ListNode *t=new ListNode(0);
        ListNode *c=t;
        while(y!=nullptr){
            // carry=0;
            z=y->val;
            z=z*2+carry;
            e=z%10;
            z/=10;
            carry=z;
            t->next=new ListNode(e);
            t=t->next;
            y=y->next;
        }
        if(carry!=0){
            t->next=new ListNode(carry);
        }
        return reverseList(c->next);
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr != nullptr) {
            ListNode* nextNode = curr->next; 
            curr->next = prev;               
            prev = curr;                     
            curr = nextNode;                 
        }

        return prev; 
    }

};

int main(){
    Solution obj;
    ListNode *head=new ListNode(9);
    head->next=new ListNode(9);
    head->next->next=new ListNode(9);
    
    ListNode *p;
    p=obj.doubleIt(head);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
}