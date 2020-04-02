#include<bits/stdc++.h>
#include"longestpath.h"

using namespace std; 
vector<bool> v; 


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
	v.assign(nodes,false);
	G.assign(nodes,vector<int>());
	
	int p1,p2;
	cout<<"Enter the graph"<<endl;
	
	int i;
	for(i=0;i<edges;i++)
	{
		cout<<"Enter the first end";
		cin>>p1;
		cout<<endl<<"Enter the second end";
		cin>>p2;
		
		if(p1>=nodes || p2>=nodes)
		{
			cout<<"Invalid graph"<<endl;
			break;
		}
		addEdge(p1,p2);
	}
	
	length.assign(nodes,0);
	
	cout<<"Longest path is "<<endl;
	
	longestpath(G);
	
	
	
	return 0;
	
}
