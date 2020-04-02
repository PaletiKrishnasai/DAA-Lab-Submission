#include<bits/stdc++.h>
#include"edge_add.h"

#define pb push_back 
#define vertex int
#define Graph vector<vector<Edge>>

using namespace std; 

vector<bool> v; 

struct Edge
{
	int conn;
	int weight;
};

vector<vector<Edge> > G;

void edge(int a, int b, int w) 
{ 
    struct Edge e;
    e.conn=b;
    e.weight=w;
	G[a].pb(e);

    e.conn=a;
    e.weight=w;
	G[b].pb(e); 
} 

void Spath(Graph G, vertex s, vertex t,int flag)
{	
	if(s==t)
	{
		cout<<"same vertex!!";
		return;
	}
	
	queue<int> q; 
	vector<int> parent;

	parent.assign(G.size(),-1);
	q.push(s); 
	v[s] = true; 

	while (!q.empty())
	{ 

		int f = q.front(); 
		q.pop(); 

		// Enqueue all adjacent of f and mark them visited 
		for (auto i = G[f].begin(); i != G[f].end(); i++) 
		{ 
			if (!v[(*i).conn] && (*i).weight==1) 
            {
				parent[(*i).conn]=f;
				q.push((*i).conn); 
				v[(*i).conn] = true; 
			} 
			else if(!v[(*i).conn] && (*i).weight!=1)
			{
				(*i).weight-=1;
				q.push(f);
			}
		} 
	
	}

	if(v[s]==1 && v[t]==1)
	{

		cout<<t<<' ';
		int tmp=parent[t];
		while(tmp!=s)
		{
			cout<<tmp<<' ';
			tmp=parent[tmp];
		}
		cout<<s<<'\n';
	}
	else
		cout<<"error edges disconnected";
}
