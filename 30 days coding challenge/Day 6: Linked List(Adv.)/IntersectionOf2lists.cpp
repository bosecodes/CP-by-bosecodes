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

int length(node *head) {
    int l = 0;
    node *temp = head;
    while(temp != NULL) {
        temp = temp->next;
        l++;
    }
    return l;
}

int intersection(node *head1, node *head2) {
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node *ptr1;
    node *ptr2;
    if(l1 > l2) {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    if(l2 > l1) {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while(d--) {
        ptr1 = ptr1->next;
        if(ptr1 == NULL) {
            return -1;
        }
    }
    
    while(ptr1 != NULL && ptr2 != NULL) {
        if(ptr1 == ptr2)
            return ptr1->data;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}





