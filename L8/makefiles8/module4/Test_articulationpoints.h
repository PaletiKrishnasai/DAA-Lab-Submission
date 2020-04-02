#include<bits/stdc++.h>
#define nl endl
#define vl vector<int>
#define vvl vector<vector<int>>
using namespace std;

vector<bool> visited;
vector<int> tin, low;
int timer;

void dfs(int v, int p = -1,vvl adj) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    int children=0;
    for (int to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] >= tin[v] && p!=-1)
                cout << v << "is an articulation point"<<nl;
            ++children;
        }
    }
    if(p == -1 && children > 1)
        cout << v << "is an articulation point"<<nl;
}

void Test_articulationpoints(vvl adj) {
    timer = 0;
    visited.assign(adj.size(), false);
    tin.assign(adj.size(), -1);
    low.assign(adj.size(), -1);
    for (int i = 0; i < adj.size(); ++i) {
        if (!visited[i])
            dfs (i);
    }
}
