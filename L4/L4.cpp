#include<bits/stdc++.h>
#include"makefiles4/L4Logic1.h"
#include"makefiles4/L4Logic2.h"
#include"makefiles4/L4Logic3.h"
#include"makefiles4/L4Logic4.h"
#include"makefiles4/L4Logic5.h"
#include"makefiles4/L4Logic6.h"
#define ll long long int
using namespace std;
int main(){
	ll n,i;
	cout<<"Question 1"<<endl;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	vector<ll>a(n);
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"The GCD using DC is "<<Logic1(a,n)<<endl;
	cout<<"Question 2"<<endl;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements\n";
	vector<ll>b(n);
	for(i=0;i<n;i++)
		cin>>b[i];
	cout<<"The number of ones using DC is "<<Logic2(b,0,n-1)<<endl;
	cout<<"Question 3"<<endl;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements\n";
	vector<ll>c(n);
	for(i=0;i<n;i++)
		cin>>c[i];
	cout<<"The number of negative numbers using DC is "<<Logic3(c,0,n-1)<<endl;
	cout<<"Question 4"<<endl;
	cout<<"Enter the number of disks to be moved"<<endl;
	cin>>n;
	cout<<"Total number of steps taken to move the disks is "<<Logic4(n)<<endl;
	cout<<"Question 5"<<endl;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements\n";
	int d[n];
	for(i=0;i<n;i++)
		cin>>d[i];
	Logic5(d,n);
	cout<<"The sorted array using 2 way mergesort is"<<endl;
	for(i=0;i<n;i++)
		cout<<d[i]<<" ";
	cout<<endl;
	cout<<"Question 6"<<endl;
	cout<<"Enter the number of elements"<<endl;
	cin>>n;
	cout<<"Enter the elements\n";
	ll e[n];
	for(i=0;i<n;i++)
		cin>>e[i];
	Logic6(e,n);
	cout<<"The sorted array using 3 way mergesort is"<<endl;
	for(i=0;i<n;i++)
		cout<<e[i]<<" ";
	cout<<endl;
	return 0;
}