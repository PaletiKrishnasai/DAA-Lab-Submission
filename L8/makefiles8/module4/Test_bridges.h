#include<bits/stdc++.h>
#define nl endl
#define vl vector<int>
#define vvl vector<vector<int>>
using namespace std;
int  timer = 0;
vector<bool> visited;
vl tin,low;

void dfs(int v, int p = -1, vvl adj) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
                cout << "bridge is from " << v << "to " << to<<nl;
        }
    }
}

void Test_bridges(vvl adj) {
    visited.assign(adj.size(), false);
    tin.assign(adj.size(), -1);
    low.assign(adj.size(), -1);
    for (int i = 0; i < adj.size(); ++i) {
        if (!visited[i])
            dfs(i);
    }
}