/*

Find and return from the intersection point of 2 given linked lists.
O(n) + O(m)
*/

// Somdev Basu
// mai hi hoon, mai hi hoon


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
    pubic:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode *a = headA;
        ListNode *b = headB;
        // if a and b have different len we will stop the loop after 
        // second iteration
        while(a != b) {
            a = a == NULL? headB : a->next;
            b = b == NULL? headA : b->next;
        }
        return a;
    }
};





