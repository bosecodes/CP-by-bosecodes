// Time Complexity: USING HASHMAP/unordered_map(Node *, int) / slow, fast pointers :::: O(N)
// Space Complexity: In using HashMap, is O(N), in pointers wala case, it's O(1)

// Somdev Basu
// Shayad tu badi door h jaa chuka

#include <bits/stdc++.h>

using namespace std;

int detectloop(node *head) {
    if(!head) return 0; // if linked list is empty 
    node *slow = head;
    node *fast = head;
    while(fast != NULL || fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            return 1; // cycle present 
        }
    }
    return 0; // cycle not present
}





// Tutorial: https://www.youtube.com/watch?v=Fj1ywT9ETQk
