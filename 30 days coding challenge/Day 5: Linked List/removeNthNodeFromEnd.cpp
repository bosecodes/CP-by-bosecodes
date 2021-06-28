// remove nth node from the end of the linked list 
// naive approach: to traverse the entire linked list initialising c = 1 at head and continuing to do so until the last node, then take the last  N-n (the nth node to be deleted) and then traverse the list till that node and then put node->next = node->next->next;
/*

The second optimal approach is to create a dummy node and make sure that it points to the head of the linked list. Then we take two pointers slow s and fast f. We take the fast pointer till the nth node and stop. Then we take both s and f and move by one step each time until f->next == NULL. If that's the case, we take s->next = s->next->next and then delete(dummynode)
Edge case if the node is at the head of the list, then the f pointer iterates through to the last node but then s pointer can't go ahead at all. Then we take the head->next = head->next->next; and then return the list.

*/


/*
 * Definition of a singly linked list 
 * struct ListNode {
     int val;
     ListNode *next;
     ListNode(int val) : { this.val = val; }
     ListNode(int val, ListNode next): this.val = val; this.next = next; }
 };
*/


#include <bits/stdc++.h>

using namespace std;


class Solution {
    public:
    ListNode *removeNthNodeFromEnd(ListNode *head, int n) {
        ListNode *start = new ListNode();
        start->next = head;
        ListNode *slow = start;
        ListNode *fast = start;
        for(int i = 1; i <= n; i++) {
            fast = fast->next;
        }
        while(fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return start->next;
    }
};





