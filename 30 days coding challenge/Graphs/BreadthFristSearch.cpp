#include <bits/stdc++.h>

using namespace std;

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    vector<int> bfs;
    vector<int> vis(V+1, 0);
    
    for(int i = 1; i <= V; i++) {
        if(!vis[i]) {
            // checking each component
            queue<int> q; // declare a queue to store all the nodes 
            q.push(i); // initialise the q by pushing the first element of the graph into queue 
            vis[i] = 1; // marking it as 1 
            while(!q.empty()) { // while the queue didn't become empty, 
            // we picked up the first element and made sure we deleted it from the queue
                int node = a.front(); // the front element of the queue is stored in the node 
                q.pop(); // the last element of queue is popped out 
                bfs.push_back(node); // we added the popped node from the queue into the bfs vector 
                for(auto it: adj[node]) {
                    if(!vis[it]) { // if a particular node hasn't been visited, 
                        q.push(it); // we take the element and push it into the queue q
                        vis[it] = 1; // and mark it visited 
                    }
                }
            }
        }
    }
    return bfs;
}




