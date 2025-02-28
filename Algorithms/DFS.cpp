#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> readGraph(int &n, int &m, int &root) {
    cin >> n >> m;

    unordered_map<int, vector<int>> graph;

    for (int i = 0; i < m; i++) {
        int u,v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);

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

void dfs(const unordered_map<int, vector<int>> &graph, const int &root, stack<int> &s, vector<bool> &visited) {
    
    visited[root] = true;
    s.push(root);

    cout << root << " ";
    
    while (!s.empty()) {
        int node = s.top();
        s.pop();

        for (int neighbour : graph.at(node)) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                s.push(neighbour);
            }
        }
    }
}


int main() {
    
    int n, m, root;

    unordered_map<int, vector<int>> graph = readGraph(n, m, root);
    stack<int> s;
    vector<bool> visited;

    printNeighbours(graph);

    dfs(graph, root, s, visited);


    return 0;
}
