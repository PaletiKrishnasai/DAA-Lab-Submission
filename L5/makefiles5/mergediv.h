#include"del_disp.h"
#include"insertion.h"

void merge(int b,int e,int a[])
{
    static int tmp[1000000];
	int mid=(b+e)/2;
	int i=b,j=mid,ct=0;

	while(i<mid&&j<e)
	{
		if(a[i]<a[j])
		{
			tmp[ct]=a[i];
			i++;
		}
		else
		{
			tmp[ct]=a[j];
			j++;
		}
		ct++;
	}
	while(i<mid)
	{
		tmp[ct]=a[i];
		i++;
		ct++;
	}
	while(j<e)
	{
		tmp[ct]=a[j];
		j++;
		ct++;
	}


	for(i=b;i<e;i++)
	{	
	
		a[i]=tmp[i-b];
	}
	
}

void divsort(int b,int e,int a[])
{
	static int ct=0;
	if(e-b<13000)     //CHOOSING 13000 instead of 10000 to always stay in vicinity of 14000 (because if exactly 10000 we end up going to 5000 which is 50% lower
	{
		insort(b,e,a);
		ct++;
	}
	else
	{
		divsort(b,(b+e)/2,a);
		divsort((b+e)/2,e,a);
		merge(b,e,a);
	}
    del_disp(ct);
}

