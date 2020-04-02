#include <math.h>
#include<iostream>

int arr_sum(int a[],int s)
{
    int sum=0;
    for(int i=0;i<s;i++)
        sum+=a[i];
    return(sum);
    
}


void split_almost(int a[],int p[],int q[],int s)
{
    int visit[s]={0},axa[s][s],sum1,sum2;
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            axa[i][j]=a[i]-a[j];
        }
        if(i<s/2)
            p[i]=a[i];
        else
            q[i-s/2]=a[i];
        
    }

    int flag=1,min,esum=0,n1,n2;
    sum1=arr_sum(p,s/2);
    sum2=arr_sum(q,s/2);
    esum=sum1-sum2;

    while(flag==1)
    {
        flag=0;
        for(int i=0;i<s/2;i++)
        {
            for(int j=0;j<s/2;j++)
            {
                int tmp=p[i]-q[j];
                if(abs(esum)>abs(esum-2*tmp))
                {
                    flag=1;
                    std::cout<<p[i]<<' '<<q[i]<<'\n';
                    tmp=p[i];
                    p[i]=q[j];
                    q[j]=tmp;
                    sum1=arr_sum(p,s/2);
                    sum2=arr_sum(q,s/2);
                    esum=sum1-sum2;

                }
            }
        }
    }
    
}
 
   