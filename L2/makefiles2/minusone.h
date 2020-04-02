#include<bits/stdc++.h>
#define nl endl
#define ll long long int
#define vl vector<ll>
#define size 1<<20
using namespace std;


int positionls(vl arr)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==-1)
			return i;
	}
}

int positionpow(vl arr,int start)
{
  int jmp=2,tmp;                           
  if(arr[0]==-1)
	return(0);
  for(int p=0;pow(2,p)<size;p++)
    {   tmp=(int)pow(2,p)+start;
        if(arr[tmp]==-1&&arr[tmp-1]!=-1)
        	return((int)pow(2,p)+start);
    	if(arr[tmp]==-1)   	 
    	 	return(positionpow(arr,(int)pow(2,p-1)));
	}
}


int positionbs(vl arr)
{
	int min, max, mid;
	min=0, max=size;
	while(min<=max)
	{
		mid=(min+max)/2;
		if(arr[mid]==-1)
		{
			if(arr[mid-1]!=-1)
			{
				return mid;
			}
			else
			{
				max=mid;
			}
		}
		else
		{
			if(arr[mid+1]==-1)
			{
				return (mid+1);
			}
			else
			{
				min=mid;
			}
		}
	}
}