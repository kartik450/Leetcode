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
    int pairSum(ListNode* head) {
        ListNode *p=head;
        int largest=head->val;
        ListNode *x=p;
        while(p!=nullptr){
            if(p->val>largest){
                largest=p->val;
                x=p;
            }
            p=p->next;
        }
        p=head;
        int sec;
        if(p!=x){
            
        sec=p->val;}
        else{
            
            sec=p->next->val;
        }
        while (p!=nullptr)
        {
            if(p->val>sec && p!=x){
                sec=p->val;
            }
            p=p->next;
        }
        cout<<x->val<<" "<<largest<<" "<<sec<<endl;
        
        return largest+sec;
    }
};

int main(){
    Solution obj;
    ListNode *head=new ListNode(4);
    head->next=new ListNode(2);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(3);

    cout<<obj.pairSum(head);
}

