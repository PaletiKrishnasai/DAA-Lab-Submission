//THETA(n^2)

void Bubblesort(int arr[],int size)
{
	int j=0,i=0;
	for(j=0;j<size-1;j++)
	{	
		for(i=0;i<size-j-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				arr[i]=arr[i]^arr[i+1];
				arr[i+1]=arr[i]^arr[i+1];
				arr[i]=arr[i]^arr[i+1];
			}
		}
	}
}