#include<bits/stdc++.h>

using namespace std;

int p=INT_MAX;
int *q=&p;

int Union(int* a[],int n,int* b[])
{
	int min=*a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(min>=*a[i])
		{
			min=*a[i];
		}
	}
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
			break;
		}
	}
	return min;
}