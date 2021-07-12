#include <bits/stdc++.h>

using namespace std;

class Solution {
    void dfs(int node, vector<int> &vis, vector<int> adj[], vector<int> &storeDFS) {
        storeDFS.push_back(node);
        vis[node] = 1; 
        for(auto it: adj[node]) {
            if(!vis[it]) 
                dfs(it, vis, adj, storeDFS);
        }
    }
    
    public:
    vector<int> dfsOnGraph(int V, vector<int> adj[]) {
        vector<int> storeDFS;
        vector<int> vis(V+1, 0);
        
        for(int i = 1; i <= V; i++) {
            if(!vis[i]) {
                dfs(i, vis, adj, storeDFS);
            }
        }
        return storeDFS;
    }
},




