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
    ListNode* doubleIt(ListNode* head) {
        int x=0;
        ListNode *p=head;
        while(p!=nullptr){
            x=x*10+p->val;
            p=p->next;
        }

        x=x*2;
        
    }
};

int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(8);
    head->next->next=new ListNode(9);

    ListNode *x=obj.doubleIt(head);
    while(x!=nullptr){
        cout<<x->val<<" ";
        x=x->next;
    }
    return 0;

}