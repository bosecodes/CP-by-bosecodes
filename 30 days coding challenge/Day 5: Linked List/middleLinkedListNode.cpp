// return the middle node of the linked list 
// O(N/2) solution, instead of naive, which counts the number of elements O(N) and then finds the middle of the 
// given linked list. O(N/2), where we take two pointers, slow and fast. where slow moves one step at a time 
// fast moves two steps at a time, by the time fast reaches the end of the linked list, the slow is at the middle
// node. So we return the slow pointer as the middle node 

// Somdev Basu
// Ghore te bhromor elo...

#include <bits/stdc++.h>

/**
 * Definition of a singly linked list 
 * struct ListNode {
     int val;
     ListNode *next;
     ListNode(int val) : { this.val = val; }
     ListNode(int val, ListNode next): this.val = val; this.next = next; }
 };
*/

class Solution {
    public:
        ListNode *reverseList(ListNode head) {
            ListNode slow = head;
            ListNode fast = head;
            while(fast != NULL && fast->next != NULL) {
                slow = slow.next;
                fast = fast.next.next;
            }
            return slow;
        }
};


