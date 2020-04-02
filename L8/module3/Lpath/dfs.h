#include<bits/stdc++.h>

using namespace std;

typedef int vertex;

typedef vector<vector<int>> Graph;

Graph G;
vector<bool> visit;


void addEdge(vertex a,vertex b)
{
	G[a].push_back(b);
	
	G[b].push_back(a);
}



void DFS(Graph G,vertex s)
{
	visit[s]=true;
	cout<<s<<" ";
	
	for(auto i=G[s].begin();i!=G[s].end();i++)
	{
		if(!visit[*i])
		{		
			DFS(G,*i);
		}
	}
}

void DFS(Graph G)
{
	int s=0;
	DFS(G,s);
}

void DFS(Graph G,vertex s,vertex t)
{
	visit[s]=true;
	DFS(G,s);
	if(visit[t]==false)
		cout<<"Unreachable"<<endl;
	else
		cout<<"Reachable"<<endl;
}
