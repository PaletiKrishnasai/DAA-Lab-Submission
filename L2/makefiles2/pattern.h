#include<bits/stdc++.h>
#define nl endl
#define ll long long int
#define vl vector<ll>
using namespace std;

void p1(int n)
{
    for(int i=0;i<n;i++)
	{
		cout<<endl;
		for(int j=1;j<n-i+1;j++)
		{
			cout<<j<<" ";
		}
	}
	
}

void p2(int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=0;j<n+1;j++)
		{			
			if(j<i)
			{
				cout<<" ";
			}
			else
				cout<<j<<" ";
		}
	}
}

void p3(int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=1;j<=i+1;j++)
		{
			cout<<j<<" ";
		}
	}
}

void p4(int n)
{
    int i,j;
    for(i=0;i<n;i++)
	{
		cout<<endl;
		for(j=0;j<n+1;j++)
		{
			if(j<n-i)
				cout<<" ";
			else
				cout<<j<<" ";
		}
	}
    
}

void p5(int n)
{
    int i,j;
    if(n%2==1)
		cout<<"There cannot exist odd number of rows in the pattern"<<endl;
	else
	{
		for(i=0;i<n/2;i++)
		{
			cout<<endl;
			for(j=0;j<n-i;j++)
			{			
				if(j<i)
					cout<<" ";
				else if(j<n+1-i)
					cout<<j<<" ";
				else
					cout<<" ";
			}
		}
		for(i=n/2;i<n;i++)
		{
			cout<<endl;
			for(j=n-i;j<n-i;j++)
			{			
				if(j<n-i-1)
					cout<<" ";
				else if(j<=i+1)
					cout<<j<<" ";
				else
					cout<<" ";
			}
		}
	}
}
