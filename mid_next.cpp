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
    ListNode* middleNode(ListNode* head) {
        ListNode *h=head;
        ListNode *x=head;
        int i=0;
        while(h!=nullptr){
            i++;
            h=h->next;
        }
        int mid=(i/2);
        while(true){
            if(mid<=0){
                break;
            }
            // x->next=x->next->next;
            x=x->next;
            mid--;

        }
        return x;
    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);

    Solution obj;
    ListNode *p;
    p=obj.middleNode(head);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
    return 0;

}