#include<bits/stdc++.h>
#include"makefiles3/bubble_sort.h"
#include"makefiles3/disp_arr.h"
#include"makefiles3/ter_sort.h"
#include"makefiles3/hash_chain_sort.h"
#include"makefiles3/split.h"


using namespace std;


int main()
{
	cout<<"Q1"<<endl;
	
	int n,i;
	cout<<"Enter the number of elements in the ternary array"<<endl;
	cin>>n;
	cout<<"Enter the elements in the array"<<endl<<"Note:Ternary array contains only 0,1,2"<<endl;
	int arr1[n],arr2[n],arr3[n];
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
        arr2[i]=arr3[i]=arr3[i];
		if(arr1[i]!=0&&arr1[i]!=1&&arr1[i]!=2)
		{
			cout<<"Ternary array cannot possess this element"<<endl;
			break;
		}
	}

    cout<<"output of array given by bubblesort:\t\t";
	Bubblesort(arr1,n);
    display(arr1,n);
    
    cout<<"output of array given by terenary sort:\t\t";
    ter_sort(arr1,n);
    display(arr1,n);

    cout<<"output of array given by hash (chain) sort:\t";
    chainsort(arr1,n);
    display(arr1,n);
    
    
    cout<<endl;
    cout<<"Q2"<<endl;
    int s;
    cout<<"pls enter arreay size\n";
    cin>>s;
   
    cout<<"pls enter array elements\n";
    int a[s],p[s/2],q[s/2];
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
 
    split_almost(a,p,q,s);

    cout<<"arr1\tarr2\n";
    for(int i=0;i<s/2;i++)
	cout<<p[i]<<'\t'<<q[i]<<'\n';
	cout<<'\n';
	
	return 0;
}
