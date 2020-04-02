#include<bits/stdc++.h>
#include"makefiles1/L1Logic1.h"
#include"makefiles1/L1Logic2.h"
#include"makefiles1/L1Logic3.h"
#include"makefiles1/L1General.h"
#define ll long long int
using namespace std;
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<"Logic1 - Recursive"<<endl;
	cout<<Logic1R(a,b)<<endl;
	cout<<"Logic2 - Recursive"<<endl;
	cout<<Logic2R(a,b)<<endl;
	cout<<"Logic3 - Recursive"<<endl;
	cout<<Logic3R(a,b)<<endl;
	cout<<"Logic1 - Iterative"<<endl;
	cout<<Logic1I(a,b)<<endl;
	cout<<"Logic2 - Iterative"<<endl;
	cout<<Logic2I(a,b)<<endl;
	cout<<"Logic3 - Iterative"<<endl;
	cout<<Logic3I(a,b)<<endl;
	ll n,i;
	cin>>n;
	vector<ll>v(n);
	for(i=0;i<n;i++)
		cin>>v[i];
	cout<<"Logic - Generalised"<<endl;
	cout<<LogicG(v,n)<<endl;
	return 0;
}