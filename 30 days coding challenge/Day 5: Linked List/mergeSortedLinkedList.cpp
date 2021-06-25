// merge two sorted linked lists in sorted order 

// Somdev Basu
// Ghore te bhromor elo...



/**
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        if(l1.val > l2.val) swap(l1, l2);
        ListNode *res = l1;
        while(l1 != NULL && l2 != NULL) {
            tmp = l1;
            l1 = l1->next;
        }
        tmp->next = l2;
        swap(l1, l2);
        return res;
    }
};


