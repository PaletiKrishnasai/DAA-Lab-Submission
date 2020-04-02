#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>v;
vector<pair<ll,ll>>e;
void pickEdge(vector<vector<ll>>g){
	pair<ll,ll>temp;
	ll minDistance = 100,i;
	ll n=g.size();
	ll selectedVertex;
	for(auto it=v.begin();it!=v.end();it++){
		ll j = *it;
		for(i=0;i<n;i++){
			if(!(binary_search(v.begin(),v.end(),i)) && g[j][i]!=0 && g[j][i]<minDistance){
				temp.first = j;
				temp.second = i;
				selectedVertex = i;
				minDistance = g[j][i];
			}
		}
	}
	v.push_back(selectedVertex);
	e.push_back(temp);
}
void MST_Prim(vector<vector<ll>>g){
	ll i,j,n = g.size();
	v.push_back(0);
	for(i=0;i<n-1;i++)
		pickEdge(g);
	cout<<"The MST has edges -"<<endl;
	for(auto it = e.begin();it!=e.end();it++){
		cout<<"("<<it->first<<","<<it->second<<")"<<endl;
	}
}
