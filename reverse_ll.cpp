#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* beforeLeft = &dummy;

        // Move beforeLeft to node before "left"
        for (int i = 1; i < left; i++) {
            beforeLeft = beforeLeft->next;
        }

        // Start reversal
        ListNode* prev = nullptr;
        ListNode* curr = beforeLeft->next;
        ListNode* tail = curr; // tail will become the end of reversed segment

        for (int i = left; i <= right; i++) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Connect reversed part
        beforeLeft->next = prev;
        tail->next = curr;

        return dummy.next;
    }
};

int main() {
    Solution obj;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    ListNode *he = obj.reverseBetween(head, 1, 5);

    while (he != nullptr) {
        cout << he->val << " ";
        he = he->next;
    }
}
