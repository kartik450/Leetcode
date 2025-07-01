#include<bits/stdc++.h>
using namespace std;

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *e=even;
        ListNode *o=odd;
        // return t;
        while(even!=nullptr && even->next!=nullptr){
            if(odd->next->next!=nullptr){
            odd->next=odd->next->next;}
            else{
                odd->next=nullptr;
            }
            if(even->next->next!=nullptr){
            even->next=even->next->next;}
            else{
                even->next=nullptr;
            }
            odd=odd->next;
            even=even->next;

            
        }
        odd->next=e;
        
        return o;
        
        

    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    
    Solution obj;
    ListNode *x;
    x=obj.oddEvenList(head);
    while(x!=nullptr){
        cout<<x->val<<" ";
        x=x->next;
    }
    return 0;
}