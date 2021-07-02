// Time Complexity : O(N), Space : O(1)

#include <bits/stdc++.h>

using namespace std;

// should check if palindromic linked list or no 

bool isPalin(node *head) {
    // returns head of reversed list 
    node *slow = head;
    node *fast = head;
    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    node *prev = NULL;
    node *next;
    node *curr = slow;
    
    while(curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
   // list is reversed now
   // now prev is at the tail of the linked list
   fast = head;
   while(prev != NULL) {
        if(fast->data != prev->data)
            return false;
        fast = fast->next;
        prev = prev->next;
   }
   return true;
}


