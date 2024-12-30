public class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l3 = new ListNode();
        ListNode p = l1;
        ListNode q = l2;
        ListNode result = l3;  // This will keep track of the head of the result list
        int x = 0, y = 0;
        
        // Build the number from the first list
        while (p != null) {
            x = x * 10 + p.val;
            p = p.next;
        }
        
        // Build the number from the second list
        while (q != null) {
            y = y * 10 + q.val;
            q = q.next;
        }
        
        // Reverse the numbers (so we can add them in the correct order)
        x = Integer.parseInt(new StringBuilder(x + "").reverse().toString());
        y = Integer.parseInt(new StringBuilder(y + "").reverse().toString());
        
        // Sum the numbers
        int sum = x + y;
        
        // Reverse the result and store it in the linked list
        // sum = Integer.parseInt(new StringBuilder(sum + "").reverse().toString());
        
        // Fill the result linked list with the digits of the sum
        while (sum != 0) {
            p = new ListNode(sum % 10);
            l3.next = p;
            l3 = l3.next;
            sum /= 10;
        }
        
        return result.next; // Skip the dummy head and return the actual result
    }
}

public class Linked_list1 {
    public static void main(String[] args) {
        ListNode a1 = new ListNode(4);
        ListNode a2 = new ListNode(5);
        ListNode a3 = new ListNode(8);

        a1.next = a2;
        a2.next = a3;
        a3.next = null;

        ListNode b1 = new ListNode(1);
        ListNode b2 = new ListNode(9);
        ListNode b3 = new ListNode(4);

        b1.next = b2;
        b2.next = b3;
        b3.next = null;

        Solution obj = new Solution();
        ListNode d = obj.addTwoNumbers(a1, b1);

        // Output the result linked list
        while (d != null) {
            System.out.print(d.val);
            d = d.next;
        }
    }
}
 {
    
}
