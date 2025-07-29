#include<bits/stdc++.h>
using namespace std;

 //* Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    void reorderList(ListNode* head) {
        int i=0;
        int j=0;
        int k=0;
        int l=0;
        vector<int> vec;
        vector<int> vv;
        ListNode *p=head;
        while(p!=nullptr){
            vec.push_back(p->val);
            p=p->next;
        }
        j=vec.size()-1;
        while(i<=j){
            if(l==0){
            vv.push_back(vec[i]);
            i++;
        l++;}
            else{
            vv.push_back(vec[j]);
            j--;
        l--;}
        }
        ListNode *n=head;
        while(n!=nullptr){
            n->val=vv[k];
            k++;
            n=n->next;
        }
        

    }
};


int main(){
    Solution obj;
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    obj.reorderList(head);

    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
    return 0;
}