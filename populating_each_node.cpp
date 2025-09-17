#include<bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};


class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> q;
        root->next=nullptr;
        Node *n=root;
        int total=1;
        int g=1;
        int count=0;
        q.push(root);
        queue<Node *> p;
        p.push(root);
        while((p.front())!=nullptr){
            if(((p.front())->left)!=nullptr) p.push((p.front())->left);
            if(((p.front())->right)!=nullptr) p.push((p.front())->right);
            if(((p.front())->left)!=nullptr) q.push((p.front())->left);
            if(((p.front())->right)!=nullptr) q.push((p.front())->right);
            p.pop();
        }
        while(p.front()!=nullptr){
            cout<<(q.front())->val<<" ";
            q.pop();
        }
        cout<<endl;
        return nullptr;
        while((q.front())!=nullptr){
            total=total+(pow(g));
            if(total==count){
                (q.front())->next=nullptr;
                q.pop();
                g++;
            }
            
            if(total!=count){
                queue<Node*> temp=q;
                temp.pop();
                (q.front())->next=((temp.front()));
                q.pop();
            }
            count++;
            
        }
        return root;
    }
private:
    int pow(int g){
        if(g==0) return 1;
        int yy=1;
        for(int i=0;i<g;i++){
            yy=yy*2;
        }
        return yy;
    }
};

int main(){
    Node * root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    Solution obj;
    Node *p;

    p=obj.connect(root);
    queue<Node *> q;
    q.push(p);
    while((q.front())!=nullptr){
         q.push((q.front())->left);
         q.push((q.front())->right);
        cout<<(q.front())->val<<" AD:"<<(q.front())->next<<"\n";
        q.pop();
    }
    Node * x=nullptr;
    // cout<<x;

}