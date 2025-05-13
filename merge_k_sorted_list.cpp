#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *p;
        vector<int> vec;
        for(int i=0;i<lists.size();i++){
            p=lists[i];
            while(p!=nullptr){
                vec.push_back(p->val);
                p=p->next;
            }
        }
        sort(vec.begin(),vec.end());
        if (vec.empty()) return nullptr;
        ListNode *head=new ListNode(vec[0]);
        ListNode *c=head;
        for(int i=1;i<vec.size();i++){
            c->next=new ListNode(vec[i]);
            c=c->next;
        }
        return head;
    }
};
int main(){
    ListNode *root1=new ListNode(1);
    root1->next=new ListNode(4);
    root1->next->next=new ListNode(5);

    ListNode *root2=new ListNode(1);
    root2->next=new ListNode(3);
    root2->next->next=new ListNode(4);

    ListNode *root3=new ListNode(2);
    root3->next=new ListNode(6);

    Solution obj;
    ListNode *root;
    vector<ListNode*> ls={root1,root2,root3};
    root=obj.mergeKLists(ls);

    while(root!=nullptr){
        cout<<root->val<<" ";
        root=root->next;
    }
}