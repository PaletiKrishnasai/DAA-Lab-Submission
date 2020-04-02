#include<bits/stdc++.h>
#include "spath.h"
using namespace std;


int main() 
{ 
    cout<<"enter number of vertices,edges\n";
    int n, e; 
    cin >> n >> e; 
  
    v.assign(n, false); 
    G.assign(n, vector<Edge>()); 

    cout<<"is your graph weighted? enter 1 yes 0 no\n";
    int flag;
    cin>>flag;

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
    else
    {
        cout<<"enter the edges (vertice numbers from 0 to "<<n-1<<")\n";
        int a, b, c; 
        for (int i = 0; i < e; i++) 
        { 
            cin >> a >> b; 
            edge(a, b, 1); 
        }
    }
    cout<<"enter edges to get spath\n";
    cin>>n>>e;
    Spath(G,n,e,flag);
    

    return 0; 
} 

