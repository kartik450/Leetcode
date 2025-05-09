#include<iostream>
#include<vector>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(): val(0),next(nullptr) {}
    ListNode(int x):val(x),next(nullptr){}
    ListNode(int x,ListNode *next):val(x),next(next){}
};

int main(){
    ListNode *root=new ListNode(2);
    root->next=new ListNode(4);
    root->next->next=new ListNode(6);
    root->next->next->next=new ListNode(8);

    vector<ListNode*> *vec=new vector<ListNode*>();
    ListNode *x=root;
    while(root!=nullptr){
        vec->push_back(root);
        root=root->next;
    }
    (*vec)[1]->val=9;
    while(x!=nullptr){
        cout<<x->val<<endl;
        x=x->next;
    }
}