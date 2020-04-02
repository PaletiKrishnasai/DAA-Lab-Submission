void ter_sort(int arr[],int n)
{
    int endptr=0,tmp;
    for(int j=0;j<3;j++)
      {
        for(int i=endptr;i<n;i++)
        {
            if(arr[i]==j)
                {
                   tmp=arr[endptr];
                   arr[endptr]=arr[i];
                   arr[i]=tmp;
                   endptr++;
                }

        }
      }
}
