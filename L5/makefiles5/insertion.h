
void insort(int b,int e,int a[])
{
	int i,j,k,tmp;
	for(i=b+1;i<e;i++)
	{
		tmp=a[i];		
		for(j=b;j<i;j++)
		{
			if(a[j]>a[i])
				break;	
		}
		for(k=i;k>=j;k--)
		{
			a[k]=a[k-1];
		}
		a[j]=tmp;
	}
}
