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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *start=head;
        ListNode *end=head;
        while(left!=1){
            left--;
            start=start->next;
        }
        while(right!=0){
            right--;
            end=end->next;
        }
        ListNode *prev=nullptr;
        ListNode *current=start;
        while(current!=end){
            ListNode *temp=current->next;
            prev=current->next=prev;
            prev=current;
            current=temp;
        }
        return prev;
    }

};

int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    ListNode *ll=obj.reverseBetween(head,2,4);
    while(ll!=0){
        cout<<ll->val<<" ";
        ll=ll->next;
    }
    
}