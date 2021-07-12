#include <bits/stdc++.h>

using namespace std;

// adjacency matrix method, valid only for smaller values of n  
// SPACE COMPLEXITY : O(N*M)
int main()
{
    int n, m;
    cin >> n >> m;
    int adj_matrix[n+1][n+1];
    
    for(int i = 0; i < m; i++) { // take the edges as input 
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1; // in case of an undirected graph 
    }
    
    return 0;
}


// ADJACENCY LIST
// Space complexity : O(V +2E) <-- UNDIRECTED 
// Incase there are weights given, use pair instead of vector 
// store a vector<int> for each vertex, to store all reachable vertices 
int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> adj[n+1];
    
    for(int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        adj[u].push_back({v, wt}); // incase no weights, adj[u].push_back(v) <-- like this 
        adj[v].push_back({u, wt});
    }
    
    return 0;
}



