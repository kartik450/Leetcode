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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> x;
        stack<int> y;

        stack<int> z;
        ListNode *p=l1;
        ListNode *q=l2;
        int sum=0,carry=0,m=0,n=0;
        while(p!=nullptr){
            x.push(p->val);
            p=p->next;
            m++;
        }
        while(q!=nullptr){
            y.push(q->val);
            q=q->next;
            n++;
        }

        while(!x.empty() || !y.empty()){
            if(x.empty()){
                sum=y.top()+carry;
                z.push(sum%10);
                carry=sum/10;
                y.pop();
                continue;
            }
            if(y.empty()){
                sum=x.top()+carry;
                z.push(sum%10);
                carry=sum/10;
                x.pop();
                continue;
                
            }
            sum=x.top()+y.top()+carry;
            z.push(sum%10);
            carry=sum/10;
            x.pop();
            y.pop();
        }
        if(carry>0){
            z.push(carry);
            carry=0;
        }
        if(m>n){
            ListNode *o=l1;
            while(o!=nullptr){
                o->val=z.top();
                o=o->next;
                z.pop();
            }
            return l1;
        }
        else{
            ListNode *o=l2;
            while(o!=nullptr){
                o->val=z.top();
                o=o->next;
                z.pop()
;            }
            return l2;
        }

    }
};

int main()
{
    ListNode *p=new ListNode(5);
    // p->next=new ListNode(2);
    // p->next->next=new ListNode(4);
    // p->next->next->next=new ListNode(3);

    ListNode *q=new ListNode(5);
    // q->next=new ListNode(6);
    // q->next->next=new ListNode(4);

    ListNode *r;
    Solution obj;
    r=obj.addTwoNumbers(p,q);
    while(r!=nullptr){
        cout<<r->val<<" ";
        r=r->next;

    }
    return 0;
}