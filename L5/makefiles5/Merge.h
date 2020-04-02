#include<bits/stdc++.h>
#include"sorting.h"
using namespace std;

int begin,mid,end;
int i,j;

int arr1[10000];
int arcount=0;


void UnionMerge(int *a,int size,int n)
{
//	int arr1[n*size];
	for(i=0;i<size;i++)
	{
		arr1[i]=*(a+i);
		arcount++;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<size;j++)
		{
			arr1[i*size+j]=*((a+i*size)+ j);
			arcount++;
		}
		MergeSort(arr1,0,arcount-1);
	}
	cout<<endl;
	for(i=0;i<n*size;i++)
	{
		cout<<arr1[i]<<" ";
	}
}
