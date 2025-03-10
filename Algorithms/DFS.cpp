#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> readGraph(int &n, int &m, int &root) {
    cin >> n >> m;

    unordered_map<int, vector<int>> graph;

    for (int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;

        // Undirected graph
        graph[u].push_back(v);
        graph[v].push_back(u);

        // Directed graph
        // graph[u].push_back(v);
    }

    cin >> root;

    return graph;

}

void printNeighbours(const unordered_map<int, vector<int>> &graph) {
    for (const auto& [node, neighbors] : graph) {
        cout << node << " -> ";
        for (int neighbor : neighbors) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

void dfs_recursive(const unordered_map<int, vector<int>> &graph, const int &root, vector<bool> &visited, const int &n) {
    
    visited[root] = true;

    cout << root << ' ';
    
    for (int neighbour : graph.at(root)) {
        if (!visited[neighbour]) {
            dfs_recursive(graph, neighbour, visited, n);
        }
    }
}


int main() {
    
    int n, m, root;

    unordered_map<int, vector<int>> graph = readGraph(n, m, root);
    vector<bool> visited(n+1, false);

    // printNeighbours(graph);

    cout << "DFS from source: " << root << '\n';
    dfs_recursive(graph, root, visited, n);
    
    return 0;
}
