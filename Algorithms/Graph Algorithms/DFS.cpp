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

void dfs_recursive(const unordered_map<int, vector<int>> &graph, const int &root, vector<bool> &visited) {
    
    visited[root] = true;

    cout << root << ' ';
    
    for (int neighbour : graph.at(root)) {
        if (!visited[neighbour]) {
            dfs_recursive(graph, neighbour, visited);
        }
    }
}

void dfs_iterative(const unordered_map<int, vector<int>> &graph, const int &root, vector<bool> &visited, stack<int> &stack) {
    stack.push(root);
    
    while (!stack.empty()) {
        int node = stack.top();
        stack.pop();

        if (!visited[node]) {
            cout << node << ' ';
            visited[node] = true;

            for (auto neighbour : graph.at(node)) {
                stack.push(neighbour);
            }
        }

    }
}

int main() {
    
    int n, m, root;

    unordered_map<int, vector<int>> graph = readGraph(n, m, root);
    vector<bool> visited(n+1, false);
    stack<int> st;

    // printNeighbours(graph);

    //Recursive DFS approach
    // cout << "Recursive DFS: \n";
    // cout << "DFS from source: " << root << '\n';
    // dfs_recursive(graph, root, visited);

    //Iterative DFS approach
    cout << "Iterative DFS: \n";
    cout << "DFS from source: " << root << '\n';
    dfs_iterative(graph,root,visited,st);

    return 0;
}
