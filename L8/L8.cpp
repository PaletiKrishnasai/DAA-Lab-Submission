#include<bits/stdc++.h>
#include"makefiles8/module1/dfs.h"
#include"makefiles8/module2/BFS.h"
#include"makefiles8/module3/dfs.h"
#include"makefiles8/module3/longpath.h"
#include"makefiles8/module3/spath.h"
#include"makefiles8/module4/Test_bridges.h"
#include"makefiles8/module4/Test_bipartite.h"
#include"makefiles8/module4/Test_articulationpoints.h"
#include"makefiles8/module5/MST_Prim.h"
#include"makefiles8/module5/MST_Kruskal.h"
#include"makefiles8/module5/MST_MyAlgo.h"
#define ll long long int
#define vl vector<int>
#define vvl vector<vl>
#define vb vector<bool>
using namespace std;

int main()
{
    int n,flag=0,e; 
    vvl G; 
    vl visited;
    vl tin, low;
    int timer;
    int nodes,edges;
	cout<<"Enter the number of vertices in the graph"<<endl;
	cin>>nodes;
	cout<<endl<<"Enter the number of edges in the graph"<<endl;
	cin>>edges;
	vl visit,v,length,edge;
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


    /*MODULE 1*/
    
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

    /*MODULE 2*/

    int a, b; 
    for (int i = 0; i < e; i++) { 
        cin >> a >> b; 
        addEdge(a, b); 
    } 
    BFS(G);
     v.assign(n, false); 
    
    BFS(G,0);
    v.assign(n, false); 

    BFS(G,0,3);
    

    /*MODULE 3*/
    cout<<"Longest path is "<<endl;
	
	longestpath(G);

      if(flag)
    {
        cout<<"enter the edges and weights (vertice numbers from 0 to "<<n-1<<")\n";
        int a, b, c; 
        for (int i = 0; i < e; i++) 
        { 
            cin >> a >> b >> c; 
            edge(a, b, c); 
        }
    }
    cout<<"enter edges to get spath\n";
    cin>>n>>e;
    Spath(G,n,e,flag);
    

    /*MODULE 4*/

    /*Test_bipartite*/
    Test_bipartite(G);

    /*Test_articulationpoints*/
    Test_articulationpoints(G);

    /*Test_bridges*/
    Test_bridges(G);

    /*MODULE 5*/
    
    /*MST_Prim*/
    MST_Prim(G);

    /*MST_Kruskal*/
    MST_Kruskal(G);

    /*MST_MyAlgo*/
    MST_MyAlgo(G);
    return 0;
}
