
using namespace std;


struct test1
{
	int min1;
	int max1;
};

struct test1 comp1(int arr1[],int n1)

{
	struct test1 t1;
	int x;
	if(n1%2==0)
	{
		if(arr1[0]>arr1[1])
		{
			t1.min1=arr1[1];
			t1.max1=arr1[0];
		}
		else
		{
			t1.min1=arr1[0];
			t1.max1=arr1[1];
		}
		x=2;
	}
	else
	{
		t1.min1=t1.max1=arr1[0];
		x=1;
	}

	while(x<n1-1)
	{
		if(arr1[x]>arr1[x+1])
		{
			if(arr1[x]>t1.max1)
				t1.max1=arr1[x];
			if(arr1[x+1]<t1.min1)
				t1.min1=arr1[x+1];
		}
		else
		{
			if(arr1[x+1]>t1.max1)
				t1.max1=arr1[x+1];
			if(arr1[x]<t1.min1)
				t1.min1=arr1[x];
		}
		x=x+2;
	}

return t1;
}

