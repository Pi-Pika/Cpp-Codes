#include <bits/stdc++.h>

using namespace std;

// Structure to represent a graph edge
struct Edge
{
    int destination;
    int weight;
};

// Structure to represent a graph node
struct Node
{
    int vertex;
    int distance;
};

// Comparison function for priority queue
struct Compare
{
    bool operator()(const Node& a, const Node& b)
    {
        return a.distance > b.distance;
    }
};

// Function to find the shortest path using Dijkstra's algorithm
vector<int> dijkstra(const vector<vector<Edge>>& graph, int start, int end)
{
    int n = graph.size();
    vector<int> distance(n, INT_MAX);
    vector<int> parent(n, -1);

    priority_queue<Node, vector<Node>, Compare> pq;
    pq.push({start, 0});
    distance[start] = 0;

    while (!pq.empty()) {
        int u = pq.top().vertex;
        int dist = pq.top().distance;
        pq.pop();

        for (const Edge& edge : graph[u])
        {
            int v = edge.destination;
            int weight = edge.weight;

            if (dist + weight < distance[v])
            {
                distance[v] = dist + weight;
                parent[v] = u;
                pq.push({v, distance[v]});
            }
        }
    }

    // Reconstruct the path
    vector<int> path;
    for (int v = end; v != -1; v = parent[v]) {
        path.push_back(v);
    }
    reverse(path.begin(), path.end());

    return path;
}

int main() {
    // Example usage
    int nodeCount = 6;
    vector<vector<Edge>> graph(nodeCount);

    // Assuming the graph is undirected
    // Add edges and their weights
    graph[0].push_back({1, 2});
    graph[0].push_back({2, 4});
    graph[1].push_back({2, 1});
    graph[1].push_back({3, 7});
    graph[2].push_back({4, 3});
    graph[3].push_back({4, 1});
    graph[3].push_back({5, 5});
    graph[4].push_back({5, 2});

    int start = 0;
    int end = 5;

    vector<int> path = dijkstra(graph, start, end);

    // Print the result
    cout << "Shortest Path from " << start << " to " << end << ": ";
    for (int vertex : path) {
        cout << vertex << " ";
    }
    cout << "\n";

    return 0;
}

