// Cycle detection for Undirected Graphs 
// Using Breadth First Search Traversal Algorithm

// Contributed by Somdev Basu 

class Solution {
    
    public:
    bool checkForCycle(int s, int prev, vector<int> adj, vector<int> &vis) {
        // create a queue for BFS traversal 
        queue<pair<int, int>> q;
        visited[s] = true; // current node is marked 1, i.e., visited, i.e., true 
        q.push({s, -1}); // the first prev is gonna be -1 just like in DFS 
        while(!q.empty()) {
            int node = q.front().first;
            int prev = q.front().second;
            q.pop(); // pop the top most element 
            for(auto it: adj[node]) { // i.e, for each node in the adjacency list 
                if(!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if(prev != it)
                    return true;
            }
        }
        return false;
    }
    
    
    public:
    boolean isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V+1, 0);
        for(int i = 1; i <= V; i++) {
            if(!vis[i]) {
                if(checkForCycle(i, V, adj, vis) == true)
                    return true;
            }
        }
        return false;
    } 
};


