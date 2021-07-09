#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
    ListNode *reverseKGroup(ListNode *head, int k) {
        if(head == NULL || k == 1) return head;
        
        // create a dummy node 
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        int count = 0;
        ListNode *curr = dummy, *nex = dummy, *prev = dummy;
        while(curr -> next != NULL) {
            curr = curr->next;
            count++;
        }
        
        // to check if count is greater than k after each time removing k from count 
        while(count >= k) {
            curr = prev->next;
            nex = curr->next;
            for(int i = 1; i < k; i++) {
                curr->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = curr->next;
            }
            prev = curr;
            count -= k;
        }
        return dummy->next;
    }
    
};



