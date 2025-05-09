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
        ListNode* rotateRight(ListNode* head, int k) {
            if(head==nullptr)
            {
                return head;
            }
            ListNode *h1=head;
            int x,y,z;
            for(int i=0;i<k;i++){
                x=head->val;
                y=head->val;
                while(h1->next!=nullptr)
                {
                    z=y;
                    y=h1->next->val;
                    h1->next->val=z;
                    h1=h1->next;
                }
                head->val=y;
                h1=head;
            }
            return head;
        }
};

int main(){
    ListNode *n3=new ListNode(3);
    ListNode *n2=new ListNode(2,n3);
    ListNode *n1=new ListNode(1,n2);
    ListNode *n0=new ListNode(0,n1);
    ListNode *head=n0;
    Solution obj;
    obj.rotateRight(head,2);
    while(head!=nullptr){
        cout<<head->val<<endl;
        head=head->next;
    }
}