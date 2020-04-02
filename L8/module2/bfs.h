#include<bits/stdc++.h>
#define pb push_back 
#define Graph vector<vector<int>>
#define vertex int
using namespace std; 
vector<bool> v; 
vector<vector<int> > G;
 void BFS(Graph G)
{
 
	int u=0;
	queue<int> q; 

	q.push(u); 
	v[u] = true; 

	while (!q.empty()) { 

		int f = q.front(); 
		q.pop(); 

		cout << f << " "; 

		for (auto i = G[f].begin(); i != G[f].end(); i++) { 
			if (!v[*i]) { 
				q.push(*i); 
				v[*i] = true; 
			} 
		} 
	} 
} 

 void BFS(Graph G,vertex s)
{
 	
	
	queue<int> q; 

	q.push(s); 
	v[s] = true; 

	while (!q.empty()) { 

		int f = q.front(); 
		q.pop(); 

		cout << f << " "; 

		for (auto i = G[f].begin(); i != G[f].end(); i++) { 
			if (!v[*i]) { 
				q.push(*i); 
				v[*i] = true; 
			} 
		} 
	} 
} 

void BFS(Graph G, vertex s, vertex t)

{
	queue<int> q; 

	q.push(s); 
	v[s] = true; 

	while (!q.empty()) { 

		int f = q.front(); 
		q.pop(); 

		

		// Enqueue all adjacent of f and mark them visited 
		for (auto i = G[f].begin(); i != G[f].end(); i++) { 
			if (!v[*i]) { 
				q.push(*i); 
				v[*i] = true; 
			} 
		} 
	
	}
	if(v[t]==true)
	cout<<"connected"<<endl;
	else
	cout<<"disconnected"<<endl; 

}


