#include<bits/stdc++.h>
using namespace std;
//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *p=head;
        int x=siz(head);
        int y=0,z=0;
        y=x/2-1;
        stack<int> st;
        if(x%2==0){
            z=0;
        }
        else{
            z=1;
        }
        for(int i=0;i<=y;i++){
            st.push(p->val);
            // cout<<st.top()<<" ";
            p=p->next;
        }
        if(z==1){
            p=p->next;
        }
        for(int i=0;i<=y;i++){
            if(p->val!=st.top()){
                return false;
            }
            p=p->next;
            st.pop();
        }
        return true;


    }
    int siz(ListNode *head){
        int count=0;
        while(head!=nullptr){
            count++;
            head=head->next;
        }
        return count;
    }
};

int main(){
    ListNode *head=new ListNode(1);
    // head->next=new ListNode(2);
    // head->next->next=new ListNode(3);
    // head->next->next->next=new ListNode(1);

    Solution obj;
    cout<<obj.isPalindrome(head);
    return 0;
}