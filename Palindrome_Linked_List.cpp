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
        bool isPalindrome(ListNode* head) {
            
        }
    };

int main(){
    ListNode *d=new ListNode(5);
    ListNode *c=new ListNode(4,d);
    ListNode *b=new ListNode(3,c);
    ListNode *a=new ListNode(2,b);
    ListNode *start=a;
    
    Solution obj;
    cout<<obj.isPalindrome(start);
    return 0;

}