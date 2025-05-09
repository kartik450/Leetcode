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
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            if(head->next==nullptr){
                return nullptr;
            }
            ListNode *h=head;
            int x=0;
            while(head!=nullptr){
                head=head->next;
                x++;
                // cout<<x<<" ";
            }
            int y=x-n;
            head=h;
            if(y==0){
                head=head->next;
                return head;
            }
            
            
            for(int i=0;i<y-1;i++){
                head=head->next;
            }
            head->next=head->next->next;
            // head->next=head->next->next;
            return h;
        }
};

int main(){
    ListNode *root=new ListNode(1);
    root->next=new ListNode(2);


    

    Solution obj;
    ListNode *x;
    x=obj.removeNthFromEnd(root,2);
    while(x!=nullptr){
        cout<<x->val<<endl;
        x=x->next;
    }
}