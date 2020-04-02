#include<bits/stdc++.h>
#define nl endl
#define ll long long int
#define vl vector<ll>
using namespace std;

int sumexist(vl A,int p)
{
	int diff; 
	int i,j;
	for(i=0;i<A.size;i++)
	{
		diff=p-A[i];
		for(j=0;j<A.size;j++)
		{
			if(i==j)
				continue;
			else if(diff==A[j])
				return 1;
		}
	}
	return 0;
}


int BinarySearch(vl arr, int l, int r, int x) 
{
	if (r >= l) { 
        int mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return BinarySearch(arr, l, mid - 1, x); 
        return BinarySearch(arr, mid + 1, r, x); 
    } 
    return -1; 
} 


int sumexistbs(vl A,int p)
{
	int diff, exist;
	int i;
	for(i=0;i<A.size;i++)
	{
		diff=p=A[i];
		exist=BinarySearch(A,0,A.size,diff);
	}
	return exist;
}



int sumexisthash(vl A,int p)
{
	int diff,h[1<<20];
	int i;
	for(i=0;i<A.size;i++)
	{
		h[A[i]]++;
	}
	for(i=0;i<A.size;i++)
	{
		diff=p-A[i];
		if(h[diff]>=1&&diff!=A[i])
			return 1;
		if(h[diff]==2&&diff==A[i])		
			return 1;
	}
	return 0;
}
