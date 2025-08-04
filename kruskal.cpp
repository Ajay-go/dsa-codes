class Disjoint_set
{
private:
    vector<int> ulp;
    vector<int> rank;

public:
    Disjoint_set(int v)
    {
        ulp.resize(v + 1);
        rank.resize(v + 1, 0);
        for (int i = 0; i <= v; i++)
        {
            ulp[i] = i;
        }
    }

    int find_ulp(int node)
    {
        if (ulp[node] == node)
            return node;
        return ulp[node] = find_ulp(ulp[node]); // Path compression
    }

    void merge(int node1, int node2)
    {
        int ulp1 = find_ulp(node1);
        int ulp2 = find_ulp(node2);
        if (ulp1 == ulp2)
            return;

        if (rank[ulp1] > rank[ulp2])
        {
            ulp[ulp2] = ulp1;
        }
        else if (rank[ulp1] < rank[ulp2])
        {
            ulp[ulp1] = ulp2;
        }
        else
        {
            ulp[ulp2] = ulp1;
            rank[ulp1]++;
        }
    }
};

class Solution
{
public:
    using pp = pair<int, pair<int, int>>;

    int kruskalsMST(int V, vector<vector<int>> &edges)
    {
        Disjoint_set ds(V);
        int sum = 0;
        priority_queue<pp, vector<pp>, greater<pp>> pq;

        for (auto &ele : edges)
        {
            int u = ele[0], v = ele[1], wt = ele[2];
            pq.push({wt, {u, v}});
        }

        while (!pq.empty())
        {
            auto [wt, edge] = pq.top();
            pq.pop();
            int u = edge.first, v = edge.second;
            if (ds.find_ulp(u) != ds.find_ulp(v))
            {
                sum += wt;
                ds.merge(u, v);
            }
        }

        return sum;
    }
};
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    
    return 0;
}