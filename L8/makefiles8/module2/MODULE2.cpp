#include<bits/stdc++.h>
#include "bfs.h"
using namespace std;



void edge(int a, int b) 
{ 
	G[a].pb(b); 

	
	 G[b].pb(a); 
} 

int main() 
{ 
    int n, e; 
    cin >> n >> e; 
  
    v.assign(n, false); 
    G.assign(n, vector<int>()); 
  
    int a, b; 
    for (int i = 0; i < e; i++) { 
        cin >> a >> b; 
        edge(a, b); 
    } 
    BFS(G);
     v.assign(n, false); 
    
    BFS(G,0);
    v.assign(n, false); 

    BFS(G,0,3);
    

    return 0; 
} 

