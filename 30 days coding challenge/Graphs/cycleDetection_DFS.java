// Cycle detection using Depth First Search Algortithm 
// The time Complexity is O(N+E), Space complexity is O(N+E) + O(N) + O(N)
// i.e., same as that of DFS 

// Contributed by Somdev Basu 

import java.util.*;
import java.io.*;

public class Solution{
    static boolean checkForCycle(int node, int prev, boolean vis[], ArrayList<ArrayList<Integer> > adj) {
        vis[node] = true;
        // traverse all the nodes in the current node's adjacency list 
        for(Integer it: adj.get(node)) {
            if(vis[it] == false) {
                if(checkForCycle(it, node, vis, adj) == true)
                    return true;
            }
            else if(it != prev) {
                return true;
            }
        }
        return false;
    }
    public boolean isCycle(int V, ArrayList<ArrayList<Integer> > adj) {
        boolean vis[] = new boolean[V+1];
        for(int i = 1; i <= V; i++) {
            if(vis[i] == false) {
                if(checkForCycle(i, -1, vis, adj))
                    return true;
            }
        }
        return false;
    }
}




