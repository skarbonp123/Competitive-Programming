#include <bits/stdc++.h>
#include <thread>
#include <chrono>
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

void bfs(const unordered_map<int, vector<int>> &graph, const int &root, queue<int> &q, vector<bool> &visited) {
    
    visited[root] = true;
    q.push(root);

    cout << "Starting BFS from node: " << root << "\n";

    while(!q.empty()) {
        int node = q.front();
        q.pop();

        cout << "Visiting node: " << node << "\n";
        this_thread::sleep_for(chrono::seconds(3));

        for (int neighbour : graph.at(node)) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
                cout << "Adding " << neighbour << " to the queue\n";
                this_thread::sleep_for(chrono::seconds(1));
            }
        }
    }

    cout << "Traversed the entire graph!\n";
}

//This code is my attempt at implementing BFS
int main() {

    //n is the number of nodes, m is the number of edges in the graph
    int n, m, root;
    
    //Reading the graph from input
    unordered_map<int, vector<int>> graph = readGraph(n, m, root);
    queue<int> q;
    vector<bool> visited(n+1, false);

    //Printing the neighbours 
    printNeighbours(graph);

    bfs(graph, root, q, visited);
    
    return 0;
}