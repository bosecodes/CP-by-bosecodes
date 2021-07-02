// Time Complexity : O(N), Space : O(1)

#include <bits/stdc++.h>

using namespace std;

// should reverse list and return its head 

struct node* reverseList(node *head) {
    // returns head of reversed list 
    node *curr = head;
    node *prev = NULL;
    while(curr != NULL) {
        node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
    return head;
}



