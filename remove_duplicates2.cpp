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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        int highest=head->val,shortest=head->val;
        unordered_map<int,int> mp;
        ListNode *l=head;
        ListNode *y=new ListNode(0);
        
        while(l!=nullptr){
            mp[l->val]++;
            if((l->val)>highest){
                highest=l->val;
            }
            if((l->val)<shortest){
                shortest=l->val;
            }
            l=l->next;
        }
        l=y;
        for(int i=shortest;i<=highest;i++){
            if(mp[i]==1){
                y->next=new ListNode(i);
                y=y->next;
            }
        }
        return l->next;
    }
};

int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(3);
    head->next->next->next->next=new ListNode(4);
    head->next->next->next->next->next=new ListNode(4);
    head->next->next->next->next->next->next=new ListNode(5);

    ListNode *ne;

    ne=obj.deleteDuplicates(head);

    while(ne!=nullptr){
        cout<<ne->val<<" ";
        ne=ne->next;
    }
    return 0;
}