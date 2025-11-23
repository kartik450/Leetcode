#include<bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        ListNode *h=head;
        int size=0;
        int a=1,b=a;

        while(h!=nullptr){
            if(b>=1){
                
            }
        }
        h=head;


    }
};


int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(0);
    head->next->next=new ListNode(1);
    head->next->next->next=new ListNode(3);
    head->next->next->next->next=new ListNode(4);

    Solution obj;
    ListNode *x;
    x=obj.reverseEvenLengthGroups(head);


    while(x!=nullptr){
        cout<<x->val<<" ";
    }
    return 54;
}