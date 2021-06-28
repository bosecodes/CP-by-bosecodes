/*

Delete a given node in the linked list. The head of the linked list isn't given, but the node to be deleted is given. Also given, the node is not the tail of the linked list
O(1) COMPLEXITY
*/

// SOMDEV BASU
// HAWAO MEI BAHENGE

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


void delete_node(ListNode *node) 
{
      *(node) = *(node->next);
}





