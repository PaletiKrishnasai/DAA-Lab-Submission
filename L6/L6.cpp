#include<bits/stdc++.h>
#include"makefiles6/nrootn.h"
#include"makefiles6/2n-3.h"
#include"makefiles6/billgates.h"
#include"makefiles6/log2.h"
#include"makefiles6/ksmallest.h"
#define ll long long int
#define ll1 long long 

using namespace std ;


int main()
{
	ll n;
	cout<<"Enter n :"<<endl;
    cin>>n;
    ll z=primalitycheck(n);
    if(z==0) cout<<"not prime"<<endl;
    if(z==1) cout<<"prime"<<endl;

    int number;
	cout<<"enter the size"<<endl;
	cin>>number;
	int arr[number];
	cout<<"enter"<<number<<"elements"<<endl;
	for (int i = 0; i < number; ++i)
	{
		cin>>arr[i];
	}
	struct test t=comp(arr,number);
	cout<<"max="<<t.max<<endl;
	cout<<"min="<<t.min<<endl;

	int n1;
	cout<<"enter the size of array"<<endl;
	cin>>n1;
	int arr1[n1];
	cout<<"enter"<<n1<<"elements"<<endl;
	for (int i = 0; i < n1; ++i)
	{
		cin>>arr1[i];
		/* code */
	}
	struct test1 t1=comp1(arr1,n1);
	cout<<"max="<<t1.max1<<endl;
	cout<<"min="<<t1.min1<<endl;


	unsigned int n2;
	cin>>n2; 
	srand(time(NULL));
	
    cout<<myalgo(n2)<<endl;
    



    ll1 a[1000000],nm=0;
    char temp;

    cout<<"Enter elements of the array :"<<endl;
 
    while(1)
    {
        scanf("%lli%c",&a[nm],&temp);
        nm++;
        if(temp=='\n')
        break;
    }

    cout<<"Enter k :"<<endl;
    ll1 k;
    cin>>k;

    ll1 x=kthsmallest(a,0,nm-1,k);

    for(ll1 i=0;i<nm;i++)
    {
        if(a[i]<=x)
        cout<<a[i]<<" ";
    }

    
}
