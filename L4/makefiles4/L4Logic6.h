#include <bits/stdc++.h> 
#define ll long long int 
using namespace std; 
void merge(ll gArray[], ll low, ll mid1,ll mid2, ll high, ll destArray[]){ 
	ll i = low, j = mid1, k = mid2, l = low; 
	while((i < mid1) && (j < mid2) && (k < high)){ 
		if(gArray[i] < gArray[j]){ 
			if(gArray[i] < gArray[k]){ 
				destArray[l++] = gArray[i++]; 
			} 
			else{ 
				destArray[l++] = gArray[k++]; 
			} 
		} 
		else{ 
			if(gArray[j] < gArray[k]){ 
				destArray[l++] = gArray[j++]; 
			} 
			else{ 
				destArray[l++] = gArray[k++]; 
			} 
		} 
	} 
	while ((i < mid1) && (j < mid2)){ 
		if(gArray[i] < gArray[j]) { 
			destArray[l++] = gArray[i++]; 
		} 
		else{ 
			destArray[l++] = gArray[j++]; 
		} 
	} 
	while ((j < mid2) && (k < high)){ 
		if(gArray[j] < gArray[k]){ 
			destArray[l++] = gArray[j++]; 
		} 
		else{ 
			destArray[l++] = gArray[k++]; 
		} 
	} 
	while ((i < mid1) && (k < high)){ 
		if(gArray[i] < gArray[k]){ 
			destArray[l++] = gArray[i++]; 
		} 
		else{ 
			destArray[l++] = gArray[k++]; 
		} 
	} 
	while (i < mid1) 
		destArray[l++] = gArray[i++];  
	while (j < mid2) 
		destArray[l++] = gArray[j++]; 
	while (k < high) 
		destArray[l++] = gArray[k++]; 
}
void mergeSort3WayRec(ll gArray[], ll low,ll high, ll destArray[]){ 
	if (high - low < 2) 
		return;
	ll mid1 = low + ((high - low) / 3); 
	ll mid2 = low + 2 * ((high - low) / 3) + 1; 
	mergeSort3WayRec(destArray, low, mid1, gArray); 
	mergeSort3WayRec(destArray, mid1, mid2, gArray); 
	mergeSort3WayRec(destArray, mid2, high, gArray); 
	merge(destArray, low, mid1, mid2, high, gArray); 
} 

void mergeSort3Way(ll gArray[], ll n){ 
	if (n == 0) 
		return; 
	ll fArray[n]; 
	for (ll i = 0; i < n; i++) 
		fArray[i] = gArray[i]; 
	mergeSort3WayRec(fArray, 0, n, gArray); 
	for (ll i = 0; i < n; i++) 
		gArray[i] = fArray[i]; 
} 
void Logic6(ll data[],ll n){ 
	mergeSort3Way(data,n);   
} 
