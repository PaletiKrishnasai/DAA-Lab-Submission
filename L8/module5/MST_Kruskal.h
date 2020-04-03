#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool comparePairs(const std::pair<pair<int,int>,int>& lhs, const std::pair<pair<int,int>,int>& rhs){
  return lhs.second < rhs.second;
}
ll checkCycle(vector<vector<ll>>t,ll v,ll u,ll visit[]){
 	ll i;
	visit[v] = 1;
	for(i=0;i<t.size();i++){
		if(t[v][i]!=0){
			if(visit[i]==1 && i!=u){
				cout<<i<<" "<<u<<" "<<v<<endl;
				return 1;
			}
			else{
				if(visit[i]==0){
					return checkCycle(t,i,v,visit);
				}
			}
		}
	}
	return 0;
}
vector<pair<pair<ll,ll>,ll>>edges;
vector<pair<pair<ll,ll>,ll>>MST;
void MST_Kruskal(vector<vector<ll>>g){
	ll i,j,n = g.size();
	vector<vector<ll>>t(n);
	for(i=0;i<n;i++){
		vector<ll>temp(n);
		for(j=0;j<n;j++)
			temp[i]=0;
		t[i]=temp;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			pair<ll,ll>p;
			p.first = i;
			p.second = j;
			if(g[i][j]!=0){
				pair<pair<ll,ll>,ll>p2;
				p2.first = p;
				p2.second = g[i][j];
				edges.push_back(p2);
			}
		}
	}
	sort(edges.begin(),edges.end(),comparePairs);
	for(auto it = edges.begin();it!=edges.end();it++){
		cout<<it->first.first<<","<<it->first.second<<" "<<it->second<<endl;
		t[it->first.first][it->first.second]=it->second;
		t[it->first.second][it->first.first]=it->second;
		for(i=0;i<n;i++){
			vector<ll>temp(n);
			temp=t[i];
			for(j=0;j<n;j++)
				cout<<temp[j]<<" ";
			cout<<endl;
		}
		ll visit[100]={0};
		if(checkCycle(t,it->first.first,it->first.first,visit)==0){
			cout<<"include"<<endl;
			MST.push_back(*it);
		}
		else{
			t[it->first.first][it->first.second]=0;
			t[it->first.second][it->first.first]=0;
		}
	}
	cout<<"The MST has edges -"<<endl;
	for(auto it = MST.begin();it!=MST.end();it++){
		cout<<it->first.first<<","<<it->first.second<<" "<<it->second<<endl;

	}
	cout<<"The MST graph is -"<<endl;
	for(i=0;i<n;i++){
		vector<ll>temp(n);
		temp=t[i];
		for(j=0;j<n;j++)
			cout<<temp[j]<<" ";
		cout<<endl;
	}
}
