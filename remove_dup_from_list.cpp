#include<iostream>
#include<vector>
#include <unordered_set>
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
        ListNode* deleteDuplicates(ListNode* head) {
            ListNode *h2=head;
            ListNode *h1=head;
            unordered_set<int> seen;
            vector<int> unique;
            vector<int> vec;

            while(h1!=nullptr){
                vec.push_back(h1->val);
                h1=h1->next;
            }

            for (int val : vec) {
                if (seen.find(val) == seen.end()) {
                    seen.insert(val);
                    unique.push_back(val);
                }
            }

            for(int i=0;i<unique.size();i++){
                head->val=unique[i];
                if(i==unique.size()-1){
                    head->next=nullptr;
                }
                head=head->next;
            }
            return h2;
            
        }
};

int main()
{
    Solution obj;
    ListNode *l3=new ListNode(5);
    ListNode *l2=new ListNode(4,l3);
    ListNode *l1=new ListNode(4,l2);
    ListNode *l0=new ListNode(2,l1);
    ListNode *l6=new ListNode(2,l0);
    ListNode *head=l6;

    obj.deleteDuplicates(head);
    while(head!=nullptr){
        cout<<head->val<<" ";
        head=head->next;
    }
}