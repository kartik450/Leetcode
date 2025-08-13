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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *p=head;
        int count=0;
        while(p!=nullptr){
            count++;
            p=p->next;
        }
        p=head;
        count=(count/2)-1;
        while(count!=0){
            p=p->next;
            count--;
        }
        p->next=p->next->next;
        return head;



    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    // head->next->next->next->next=new ListNode(5);

    Solution obj;
    ListNode *p=obj.deleteMiddle(head);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }

}