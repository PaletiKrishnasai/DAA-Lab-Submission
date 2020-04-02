#define ll long long int
using namespace std;
ll Logic2(vector<ll>a,ll l,ll r){
	if(l<r){
		ll m = (l+r)/2;
		return Logic2(a,l,m) + Logic2(a,m+1,r);
	}
	else 
		return a[l];
}