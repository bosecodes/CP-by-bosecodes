class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None ):
        self.val = int(x)
        self.next = next 
        self.random = random 


class Solution:
    def copyRandomList(self, head: 'Node') -> 'Node':
        oldToCopy = {None : None}
        
        curr = head 
        while(curr):
            copy = Node(curr.val)
            oldToCopy[old] = copy 
            curr = curr->next 
        
        curr = head 
        while(curr):
            copy = oldToCopy[curr]
            copy.next = oldToCopy[curr.next]
            copy.random = oldToCopy[curr.random]
            curr = curr.next

    return oldToCopy[head]
    


# see this for guidelines : https://www.youtube.com/watch?v=5Y2EiZST97Y
