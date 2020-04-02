#include<bits/stdc++.h>
#define nl endl
#define vl vector<int>
#define vvl vector<vector<int>>
using namespace std;

void Test_bipartite(vvl adj)
{
vl side(adj.size(), -1);
bool is_bipartite = true;
queue<int> q;
for (int st = 0; st < adj.size(); ++st) {
    if (side[st] == -1) {
        q.push(st);
        side[st] = 0;
        while (!q.empty()) {
            int v = q.front();
            q.pop();
            for (int u : adj[v]) {
                if (side[u] == -1) {
                    side[u] = side[v] ^ 1;
                    q.push(u);
                } else {
                    is_bipartite &= side[u] != side[v];
                }
            }
        }
    }
}
    return;
}
