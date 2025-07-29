#include<bits/stdc++.h>
using namespace std;
// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p=head;
        ListNode *q=head;
        int x=0;
        while(q!=NULL && q->next!=NULL){
            
            p=p->next->next;
            q=q->next;
            if(p==q){
                x=1;
                return p->next;
            }
        }
    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=head;
    
    Solution obj;
    ListNode *p=obj.detectCycle(head);
    ListNode *q=p;
    cout<<q->val<<" ";
    q=q->next;
    while(q!=p && q!=NULL){
        cout<<q->val<<" ";
        q=q->next;
    }
    return 0;

}