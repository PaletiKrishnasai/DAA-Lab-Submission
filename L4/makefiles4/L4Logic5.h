#define ll long long int 
using namespace std;
void merge(ll a[],ll l,ll m,ll r){
	ll i,j,k;
	ll n1 = m-l+1;
	ll n2 = r-m;
	ll t1[n1],t2[n2];
	for(i=0;i<n1;i++)
		t1[i] = a[i+l];
	for(i=0;i<n2;i++)
		t2[i] = a[i+m+1];
	i=0;
	j=0;
	k=l;
	while(i<n1 && j<n2){
		if(t1[i]<=t2[j]){
			a[k] = t1[i];
			i++;
		}
		else{
			a[k] = t2[j];
			j++;	
		}
		k++;
	}
	while(i<n1){
		a[k]=t1[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=t2[j];
		j++;
		k++;
	}
}
void mergeTwo(ll a[],ll l, ll r){
	if(l<r){
		ll m = l + (r-l)/2;
		mergeTwo(a,l,m);
		mergeTwo(a,m+1,r);
		merge(a,l,m,r);
	}
}
void Logic5(int a[],int n){
	ll b[n],c[n],i;
	for(i=0;i<n;i++)
		b[i] = a[i];
	for(i=0;i<n;i++)
		c[i] = a[i];
	mergeTwo(b,0,n-1);
	for(i=0;i<n;i++)
		a[i]=b[i];
}