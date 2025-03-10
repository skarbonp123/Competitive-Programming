/**
 *    author: skarbonp
**/
#include <bits/stdc++.h>
using namespace std;


void dijkstra(int source, vector<vector<pair<int, int>>>& adj, vector<int> &dist) {
    
    int V = adj.size();
    dist.assign(V, INT_MAX);
    dist[source] = 0;

    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0, source}); //Since we prioritize based off of the first item we need to put the distance first

    while (!pq.empty()) {
        int dis = pq.top().first;
        int u = pq.top().second;
        pq.pop();
        
        if (dis > dist[u]) continue;

        for (auto& edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }

    }


}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int V = 5; // Number of vertices
    vector<vector<pair<int, int>>> adj(V); // Adjacency list (node -> (neighbor, weight))

    // Add edges (undirected for simplicity)
    adj[0].push_back({1, 10});
    adj[0].push_back({2, 3});
    adj[1].push_back({3, 2});
    adj[2].push_back({1, 4});
    adj[2].push_back({3, 8});
    adj[3].push_back({4, 7});
    adj[4].push_back({3, 9});

    vector<int> dist;
    dijkstra(0, adj, dist); // Run Dijkstra from node 0

    cout << "Shortest distances from node 0:" << endl;
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << ": " << (dist[i] == INT_MAX ? -1 : dist[i]) << '\n';
    }
    
    return 0;
}
