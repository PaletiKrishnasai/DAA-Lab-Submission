#include<bits/stdc++.h>
using namespace std;

void Union(int* a[],int n,int size, int* b[])
{
	int min;
	priority_queue <int, vector<int>, greater<int> > pq;
	for(i=0;i<n;i++)
	{
		pq.push(*a[i]);
	}
	for(j=0;j<n*size;j++)
	{
		min=pq.top();
		pq.pop();
		for(i=0;i<n;i++)
		{
			if(*a[i]==min)
			{
				if(a[i]!=b[i])
				{
					a[i]++;
				}
				else
				{
					a[i]=q;
				}
				pq.push(*a[i]);
			}
		}
		cout<<min<<" ";
	}
}
