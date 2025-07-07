#include <iostream>
#include <vector>
using namespace std;

class disjoint_set
{
private:
    vector<int> rank;
    vector<int> ulp; // ultimate parent

public:
    disjoint_set(int n)
    {
        ulp.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            ulp[i] = i; // Initially, each node is its own parent
        }
    }

    int find_ultimate_parent(int node)
    {
        if (ulp[node] == node)
            return node;
        return ulp[node] = find_ultimate_parent(ulp[node]); // Path compression
    }

    void merge(int node1, int node2)
    {
        int parent1 = find_ultimate_parent(node1);
        int parent2 = find_ultimate_parent(node2);

        if (parent1 == parent2)
            return; // Already in the same set

        if (rank[parent1] > rank[parent2])
        {
            ulp[parent2] = parent1;
        }
        else if (rank[parent1] < rank[parent2])
        {
            ulp[parent1] = parent2;
        }
        else
        {
            ulp[parent2] = parent1;
            rank[parent1]++;
        }
    }
};

int main()
{
    disjoint_set ss(5);
    ss.merge(2, 3);
    int p1 = ss.find_ultimate_parent(2);
    int p2 = ss.find_ultimate_parent(3);

    cout << p1 << " " << p2 << endl;

    return 0;
}
