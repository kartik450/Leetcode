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
        if(head->next==nullptr){
            return head;
        }
        ListNode* o=head;
        vector<int> vec;
        int lar=o->val;
        int ind=-1;
        while(o!=nullptr){
            vec.push_back(o->val);
            
            if(lar<o->val){
                lar=o->val;
                ind=vec.size()-1;
            }
            o=o->next;
            
        }
        vector<int> v;
        if(ind!=0){
            ind++;
            v.push_back(lar);
            for(int i=0;i<ind-1;i++){
                vec[i]=-1000;
            }
        }

        for(int i=ind;i<vec.size();i++){
            for(int j=ind;j<=i;j++){
                if(vec[j]<vec[i]){
                    vec[j]=-1000;
                }
            }
        }
        o=head;
        for(int i=0;i<vec.size();i++){
            if(vec[i]!=-1000){
            o->val=vec[i];
            o=o->next;
        }

        }
        o=nullptr;
        
        return head;
    }
};

int main(){
    ListNode *head=new ListNode(2);
    head->next=new ListNode(1);
    head->next->next=new ListNode(1);
    head->next->next->next=new ListNode(1);
    // head->next->next->next->next=new ListNode(8);
    // head->next->next->next->next->next=new ListNode(12);

    Solution obj;
    ListNode *x;
    x=obj.removeNodes(head);
    
    while(x!=nullptr){
        cout<<x->val<<" ";
        x=x->next;
    }
    cout<<endl;
}