#define ll long long int
using namespace std;
ll gcd(ll a,ll b){
	if(a==0)
		return b;
	return gcd(b%a,a);
}
ll dc(vector<ll>v,ll p,ll q){
	if(p<q){
		ll m=(p+q)/2;
		ll x=dc(v,p,m);
		ll y=dc(v,m+1,q);
		return gcd(x,y);
	}
	else 
		return v[p];
}
ll Logic1(vector<ll>v,ll n)
{
	ll p=0,q=n-1;
	return dc(v,p,q);
}