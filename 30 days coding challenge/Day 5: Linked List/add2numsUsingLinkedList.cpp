/*

Add 2 numbers given in reverse order in two seperate linked lists and return the sum in reverse order with a linked list.

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
    ListNode *addTwoNums(ListNode *l1, ListNode *l2) {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int carry = 0;
        while(l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        if(l2 != NULL) {
            sum += l2.val;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum/10;
        ListNode *node = new ListNode(sum % 10);
        temp->next = node;
        temp = temp->next;
    }
    return dummy->next;
};





