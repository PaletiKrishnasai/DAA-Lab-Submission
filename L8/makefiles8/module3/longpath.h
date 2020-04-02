#include<bits/stdc++.h>
#include"dfs.h"

using namespace std;

vector<int> length;

 void longestpath(Graph G,vertex s=0)
{
 	int size=0;
	
	queue<int> q; 

	q.push(s); 
	v[s] = true; 
	length[s]=0;

	while (!q.empty()) { 

		int f = q.front(); 
		q.pop(); 


		for (auto i = G[f].begin(); i != G[f].end(); i++) { 
			if (!v[*i]) { 
				q.push(*i); 
				v[*i] = true;
				length[*i]=length[*i -1]+1;
				size++;
			} 
		}
		
	} 
	int maxlength=length[s];
	int index=s;
	for(int i=0;i<=size;i++)
	{
		if(maxlength<length[i])
		{
			maxlength=length[i];
			index=i;
		}
	} 
	visit.assign(size+1,false);

	DFS(G,index);
	
	return;
} 
