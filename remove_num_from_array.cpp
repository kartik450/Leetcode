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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        ListNode *u=new ListNode(0);
        
        u->next=head;
        ListNode *o=u;
        while(u->next!=nullptr && u!=nullptr){
            if(mp[u->next->val]>0){
                // cout<<u->next->val<<endl;
                u->next=u->next->next;
                continue;
            }
            
            u=u->next;
        }
        return o->next;

    }
};

int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    vector<int> vec={1,2,3};
    ListNode *p=obj.modifiedList(vec,head);
    while(p!=nullptr){
        cout<<p->val<<" ";
        p=p->next;
    }
    return 0;
}