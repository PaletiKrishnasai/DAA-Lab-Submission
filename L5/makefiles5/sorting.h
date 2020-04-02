#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int size)
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

void InsertionSort(int a[],int size)
{
	int i,j,temp;
	int t;
	i=1;
	for(;i<size;i++)
	{	
	j=i-1;
	t=a[i];
	while(j>=0 && a[j]>t)
	{
		a[j+1]=a[j];
		j--;
	}
	a[j+1]=t;
	}
}

void selectionSort(int arr[], int size) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < size-1; i++) 
    { 
        min_idx = i; 
        for (j = i+1; j < size; j++) 
        	if (arr[j] < arr[min_idx]) 
       			min_idx = j; 
       // swap(&arr[min_idx], &arr[i]); 
        arr[i]=arr[i]^arr[min_idx];
		arr[min_idx]=arr[i]^arr[min_idx];
		arr[i]=arr[i]^arr[min_idx];
    } 
}

int s;

int Partition(int arr[],int p,int r)
{
	int x=arr[r];
	int i=p-1;
	int j;
	for(j=p;j<r;j++)
	{
		if(arr[j]<=x)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[r]);
	return i+1;
}

void QuickSort(int arr[],int p,int r)
{
	if(p<r)
	{
		s=Partition(arr,p,r);
		QuickSort(arr,p,s-1);
		QuickSort(arr,s+1,r);
	}	
}


/*The subarray is arr[l...m] and arr[m+1...r] for 2-way merge sort*/
/*merge(arr,l,m,r) will merge two arrays which are sorted*/
void merge(int arr[],int begin,int mid,int end)
{
	int i,j,k;
	int L[mid-begin+1], R[end-begin];
	
	for(i=0;i<mid-begin+1;i++)
	{
		L[i]=arr[begin+i];
	}
	for(j=0;j<end-mid;j++)
	{
		R[j]=arr[mid+1+j];
	}
	i=0,j=0; /*Initial indexes of left and right subarrays*/
	k=begin; /*Initial index of merged subarray*/
	while((i<mid-begin+1)&&(j<end-mid))
	{
		if(L[i]<=R[j])
		{
			arr[k]=L[i];
			i++;
		}
		else
		{
			arr[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<mid-begin+1)
	{
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<end-mid)
	{
		arr[k]=R[j];
		j++;
		k++;
	}
}

void MergeSort(int arr[],int begin,int end)
{
	if(begin<end)
	{
		int mid=(begin+end)/2;
		MergeSort(arr,begin,mid);
		MergeSort(arr,mid+1,end);
		merge(arr,begin,mid,end);
	}
}

/* Merge the sorted ranges [low, mid1), [mid1,mid2)  
and [mid2, high) mid1 is first midpoint  
index in overall range to merge mid2 is second  
midpoint index in overall range to merge*/
void merge(int gArray[], int low, int mid1,  
           int mid2, int high, int destArray[])  
{  
    int i = low, j = mid1, k = mid2, l = low;  
  
    // choose smaller of the smallest in the three ranges  
    while ((i < mid1) && (j < mid2) && (k < high))  
    {  
        if(gArray[i] < gArray[j]) 
        { 
            if(gArray[i] < gArray[k]) 
            { 
                destArray[l++] = gArray[i++]; 
            } 
            else
            { 
                destArray[l++] = gArray[k++]; 
            } 
        } 
        else
        { 
            if(gArray[j] < gArray[k]) 
            { 
                destArray[l++] = gArray[j++]; 
            } 
            else
            { 
                destArray[l++] = gArray[k++]; 
            } 
        } 
    }  
  
    // case where first and second ranges 
    // have remaining values  
    while ((i < mid1) && (j < mid2))  
    {  
        if(gArray[i] < gArray[j]) 
        { 
            destArray[l++] = gArray[i++]; 
        } 
        else
        { 
            destArray[l++] = gArray[j++]; 
        } 
    }  
  
    // case where second and third ranges 
    // have remaining values  
    while ((j < mid2) && (k < high))  
    {  
        if(gArray[j] < gArray[k]) 
        { 
            destArray[l++] = gArray[j++]; 
        } 
        else
        { 
            destArray[l++] = gArray[k++]; 
        }  
    }  
  
    // case where first and third ranges have  
    // remaining values  
    while ((i < mid1) && (k < high))  
    {  
        if(gArray[i] < gArray[k]) 
        { 
            destArray[l++] = gArray[i++]; 
        } 
        else
        { 
            destArray[l++] = gArray[k++]; 
        }  
    }  
  
    // copy remaining values from the first range  
    while (i < mid1)  
        destArray[l++] = gArray[i++];  
  
    // copy remaining values from the second range  
    while (j < mid2)  
        destArray[l++] = gArray[j++];  
  
    // copy remaining values from the third range  
    while (k < high)  
        destArray[l++] = gArray[k++];  
}  
  
  
/* Performing the merge sort algorithm on the  
given array of values in the rangeof indices  
[low, high). low is minimum index, high is  
maximum index (exclusive) */
void merge3sort(int gArray[], int low, 
                      int high, int destArray[])  
{  
    // If array size is 1 then do nothing  
    if (high - low < 2)  
        return;  
  
    // Splitting array into 3 parts  
    int mid1 = low + ((high - low) / 3);  
    int mid2 = low + 2 * ((high - low) / 3) + 1;  
  
    // Sorting 3 arrays recursively  
    merge3sort(destArray, low, mid1, gArray);  
    merge3sort(destArray, mid1, mid2, gArray);  
    merge3sort(destArray, mid2, high, gArray);  
  
    // Merging the sorted arrays  
    merge(destArray, low, mid1, mid2, high, gArray);  
} 
  
void merge3(int gArray[], int n)  
{  
    // if array size is zero return null  
    if (n == 0)  
        return;  
  
    // creating duplicate of given array  
    int fArray[n];  
  
    // copying alements of given array into  
    // duplicate array  
    for (int i = 0; i < n; i++)  
        fArray[i] = gArray[i];  
  
    // sort function  
    merge3sort(fArray, 0, n, gArray);  
  
    // copy back elements of duplicate array  
    // to given array  
    for (int i = 0; i < n; i++)  
        gArray[i] = fArray[i];  
} 
