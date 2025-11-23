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
    int pairSum(ListNode* head) {
        if(head->next==nullptr){
            return 0;
        }
        ListNode *x=head;
        int a=0;

        vector<int> vec;
        while(x!=nullptr){
            vec.push_back(x->val);
            x=x->next;
        }
        vector<int> sums;
        int max_sum=-5000000;
        for(int i=0;i<vec.size()/2;i++){
            sums.push_back((vec[i])+(vec[(vec.size())-1-i]));
            if(sums[i]>max_sum){
                max_sum=sums[i];
            }

        }
        
        return max_sum;

        
    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(100000);
    // head->next->next=new ListNode(2);
    // head->next->next->next=new ListNode(3);

    Solution obj;
    cout<<obj.pairSum(head)<<endl;
    return 34545;

}