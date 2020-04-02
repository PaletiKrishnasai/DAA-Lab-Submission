#define ll long long int
using namespace std;
ll Logic3(vector<ll>a,ll l,ll r){
	if(l<r){
		ll m = (l+r)/2;
		return Logic3(a,l,m) + Logic3(a,m+1,r);
	}
	else{
		if(a[l]<0) 
			return 1;
		else
			return 0;
	}
}