#define ll long long int
using namespace std;
ll recur(ll a,ll b){
	if(a>b){
		if(a%b==0){
			return b;
		}
		a=a%b;
		return recur(a,b);
	}
	else{
		if(b%a==0){
			return a;
		}
		b=b%a;
		return recur(a,b);	
	}
}
ll LogicG(vector<ll>a,ll n){
	ll res,i;
	res = a[0];
	for(i=1;i<n;i++){
		res = recur(res,a[i]);	
	}
	return res;
}
