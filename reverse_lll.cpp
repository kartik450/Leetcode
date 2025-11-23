#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0),next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* temp): val(x), next(temp) {}
};

class Solution {
    public:
        ListNode* reverseBetween(ListNode* head, int left, int right) {
            ListNode* vv=head;
            int size=0;
            while(vv!=nullptr){
                size++;
                vv=vv->next;
            }
            vv=head;
            ListNode* ww=head;
            if(left==1){
                goto ggg;
            }
            for(int i=2;i<left;i++){
                vv=vv->next;
            }
            
            ggg:
            
            ListNode *b=nullptr;
            int i;
            if(right==size){goto fff;
            }
            for(i=1;i<right;i++){
                ww=ww->next;
            }
            b=ww->next;
            ww->next=nullptr;
            fff:

            ListNode *a=vv->next;
            vv->next=nullptr;
            vv=a;
            
            ListNode *prev=nullptr;
            ListNode *curr=vv;
            while(curr!=nullptr){
                ListNode *next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            ListNode *t=head;
            while(t->next!=nullptr){
                t=t->next;
            }
            t->next=prev;
            
            while(t->next!=nullptr){
                t=t->next;
            }
            t->next=b;
            return head;
        }
};

int main(){
    ListNode* head=new ListNode(3);
    head->next=new ListNode(5);
    ListNode* x=head;

    // for(int i==0;i<5;i++){
    //     x->next=new ListNode(i+1);
    //     x=x->next;
    // }

    Solution obj;
    x=nullptr;
    x=obj.reverseBetween(head,1,2);

    while(x!=nullptr){
        cout<<x->val<<" ";
        x=x->next;
    }
    cout<<endl;

}