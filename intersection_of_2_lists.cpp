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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map <ListNode *,int> mp;
        while(headA!=nullptr){
            mp[headA]++;
            headA=headA->next;
        }
        while(headB!=nullptr){
            if(mp[headB]>0){
                return headB;
            }
            headB=headB->next;
        }
        return nullptr;
    }
};

int main(){
    Solution oobj;
    ListNode *l1=new ListNode(4);
    l1->next=new ListNode(1);
    l1->next->next=new ListNode(8);
    l1->next->next->next=new ListNode(4);
    l1->next->next->next->next=new ListNode(5);

    ListNode *l2=new ListNode(5);
    l2->next=new ListNode(6);
    l2->next->next=new ListNode(1);
    l2->next->next->next=l1->next->next;
    ListNode *p;
    p=oobj.getIntersectionNode(l1,l2);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }

}