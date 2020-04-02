void chainsort(int arr[],int size)
{
	int chain[3][size];
	int i=0,j=0,k=0,l;

	for(l=0;l<size;l++)
	{
		if(arr[l]==0)
			{
                chain[0][i]=arr[l];
                i++;
            }
		if(arr[l]==1)
			{
                chain[1][j]=arr[l];
                j++;
            }
		if(arr[l]==2)
			{
                chain[2][k]=arr[l];
                k++;
            }
	}

	for(int ct=0;ct<i;ct++)
		arr[ct]=chain[0][ct];
	for(int ct=0;ct<j;ct++)
		arr[2+ct]=chain[1][ct];
	for(int ct=0;ct<k;ct++)
		arr[i+j+ct]=chain[2][ct];
}