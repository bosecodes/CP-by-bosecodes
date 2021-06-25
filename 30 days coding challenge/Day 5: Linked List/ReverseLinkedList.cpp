// This solution takes O(N) time complexity and O(1) space complexity 

// reverse a given linked list 
// 1->2->3->4->5->NULL to NULL<-1<-2<-3<-4<-5

// Somdev Basu
// Dil jaise dhadak dhadakne do

#include <bits/stdc++.h>

/**
 * Definition of a singly linked list 
 * struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x): val(0), next(nullptr) {}
     ListNode(int x, ListNode *next): val(x), next(next) {}
 };
*/

class Solution {
    public:
        ListNode *reverseList(ListNode *head) {
            ListNode *newHead = NULL;
            while(newHead != NULL) {
                ListNode *next = head->next;
                head->next = newHead;
                newHead = head;
                head = next;
            }
            return newHead;
        }
};


