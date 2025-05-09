#include<iostream>
#include<vector>
#include<algorithm>
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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            vector<int> vec;
            if(list1==nullptr && list2==nullptr){
                return nullptr;
            }
            else if(list2==nullptr){
                int i=0;
                ListNode *x=list1;
                while(list1!=nullptr){
                    vec.push_back(list1->val);
                    list1=list1->next;
                }
                sort(vec.begin(),vec.end());
                list1=x;
                while(list1!=nullptr){
                    list1->val=vec[i];
                    list1=list1->next;
                    i++;
                    
                }   
                return x;
            }
            else if(list1==nullptr){
                int i=0;
                ListNode *x=list2;
                while(list2!=nullptr){
                    vec.push_back(list2->val);
                    list2=list2->next;
                }
                sort(vec.begin(),vec.end());
                list2=x;
                while(list2!=nullptr){
                    list2->val=vec[i];
                    list2=list2->next;
                    i++;
                    
                }
                return x;
            }
            else{

            ListNode *x=list1;
            while(list1->next!=nullptr){
                // cout<<x->val<<" ";
                list1=list1->next;
                
            }
            list1->next=list2;
            // cout<<x->val<<" ";
            list1=x;
            while(list1!=nullptr){
                cout<<list1->val<<" ";
                list1=list1->next;
            }
            cout<<endl;
            
            list1=x;
            while(list1!=nullptr){
                vec.push_back(list1->val);
                list1=list1->next;
            }
            sort(vec.begin(),vec.end());
            int i=0;
            list1=x;
            while(list1!=nullptr){
                list1->val=vec[i];
                list1=list1->next;
                i++;
            }
            return x;
        }
    }

};

int main(){
    ListNode *root=new ListNode(1);
    root->next=new ListNode(2);
    root->next->next=new ListNode(4);

    ListNode *root1=new ListNode(7);
    root1->next=new ListNode(3);
    root1->next->next=new ListNode(8);

    ListNode *root2;

    Solution obj;
    root2=obj.mergeTwoLists(root,root1);
    while(root2!=nullptr){
        cout<<root2->val<<endl;
        root2=root2->next;
    }
    
}