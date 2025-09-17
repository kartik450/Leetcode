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
    ListNode* removeNodes(ListNode* head) {
        ListNode *d=head;
        ListNode *prev;
        while(d!=nullptr && d->next==nullptr){
            if((d->val)>=)
        }
    }
};

int main(){
    ListNode *head=new ListNode(5);
    head->next=new ListNode(2);
    head->next->next=new ListNode(13);
    head->next->next->next=new ListNode(3);
    head->next->next->next->next=new ListNode(8);

    ListNode *ans;

    Solution obj;
    ans=obj.removeNodes(head);

    while(ans!=nullptr){
        cout<<ans->val<<" ";
        ans=ans->next;
    }
    return 0;

}