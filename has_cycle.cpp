#include<iostream>
using namespace std;
// * Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;           
            fast = fast->next->next;     

            if (slow == fast) return true;
        }

        return false;
    }
};

int main(){
    ListNode *root=new ListNode(3);
    root->next=new ListNode(2);
    root->next->next=new ListNode(0);
    root->next->next->next=new ListNode(-4);
    root->next->next->next->next=root->next;
    Solution bj;
    cout<<bj.hasCycle(root);
    return 0;
}