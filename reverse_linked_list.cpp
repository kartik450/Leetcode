#include<iostream>
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
        ListNode* reverseList(ListNode* head) {
            ListNode *prev=nullptr;
            ListNode *current=head;
            

            while(current!=nullptr){
                ListNode *temp=current->next;
                prev=current->next=prev;
                prev=current;
                current=temp;


            }

            return prev;
            

        }
};

int main(){
    Solution obj;
    ListNode *t5=new ListNode(5);
    ListNode *t4=new ListNode(4,t5);
    ListNode *t3=new ListNode(3,t4);
    ListNode *t2=new ListNode(2,t3);
    ListNode *t1=new ListNode(1,t2);
    ListNode *root=t1;

    ListNode* o=obj.reverseList(root);
    while(o!=nullptr){
        cout<<o->val<<endl;
        o=o->next;
    }
    return 0;
}