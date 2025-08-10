#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// code is about disjoin set union which is helpful in finding same compoenent thing
void adjacency_matrix(int n)
{
    vector<vector<int>> graph(n, vector<int>(n, 0));
    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v):" << endl;
    while (edges--)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1; // for undirected graph
    }

    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << graph[i][j] << " ";
        cout << endl;
    }
}

void adjacency_list(int n)
{
    vector<int> graph[n];
    int edges;
    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Enter edges (u v):" << endl;
    while (edges--)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); // for undirected graph
    }

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << i << ": ";
        for (int neighbor : graph[i])
            cout << neighbor << " ";
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "\n-- Using Adjacency Matrix --\n";
    adjacency_matrix(n);

    cout << "\n-- Using Adjacency List --\n";
    adjacency_list(n);

    return 0;
}
