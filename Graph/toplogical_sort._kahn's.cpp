#include <iostream>
#include <vector>
#include <queue>

using namespace std;
const int sz = 500;
int adj[500][500];

// Kahn's algorithm.
vector<int> topSort()
{
    int n = sz;
    // compute indgree.
    vector<int> indegree(sz, 0);
    for (int i = 0; i < sz; i++)
    {
        for (auto j : adj[i])
        {
            indegree[j]++;
        }
    }

    queue<int> ready;
    vector<int> order;
    for (int i = 0; i < sz; i++)
    {
        if (!indegree[i])
        {
            ready.push(i);
            order.push_back(i);
        }
    }
    while (!ready.empty())
    {
        int top = ready.front();
        ready.pop();
        for (auto i : adj[top])
        {
            indegree[i]--;
            if (!indegree[i])
            {
                ready.push(i);
                order.push_back(i);
            }
        }
    }
    if (order.size() != sz)
    {
        return {};
    }
    return order;
}

int main()
{
    
}