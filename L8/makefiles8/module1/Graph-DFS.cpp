#include<bits/stdc++.h>
#include"dfs.h"
using namespace std;

void addEdge(vertex a,vertex b)
{
	G[a].push_back(b);
	
	G[b].push_back(a);
}

int main()
{
	
	int nodes,edges;
	cout<<"Enter the number of vertices in the graph"<<endl;
	cin>>nodes;
	cout<<endl<<"Enter the number of edges in the graph"<<endl;
	cin>>edges;
	
	visit.assign(nodes,false);
	G.assign(nodes,vector<int>());
	
	int p1,p2;
	cout<<"Enter the graph"<<endl;
	
	int i;
	for(i=0;i<edges;i++)
	{
		cout<<"Enter the first edge";
		cin>>p1;
		cout<<endl<<"Enter the second edge";
		cin>>p2;
		
		if(p1>=nodes || p2>=nodes)
		{
			cout<<"Invalid graph"<<endl;
			break;
		}
		addEdge(p1,p2);
	}
	
/*	visit.assign(4,false);
	G.assign(4,vector<int>());
	
    addEdge(0, 1);
    
    addEdge(0, 2);
    
    addEdge(1, 2);
    
    addEdge(2, 3);
    */

	int a,b;
	cout<<"Enter the nodes which need to be checked for a path"<<endl;
	cin>>a>>b;
	
    DFS(G, a, b);
	visit.assign(nodes,false);
	cout<<endl;
	
	cout<<"Enter the starting point of traversal"<<endl;
	cin>>a;
	
	DFS(G, a);
	visit.assign(nodes,false);
	cout<<endl;
	
	cout<<"Traversal from arbitrary point 0 is"<<endl;
	
	DFS(G);
	visit.assign(nodes,false);
	    
    return 0;
}

