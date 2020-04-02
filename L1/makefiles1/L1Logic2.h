#define ll long long int
using namespace std;
ll recur2(ll a,ll b,ll mn){
	if(a%mn==0 && b%mn==0)
		return mn;
	return recur2(a,b,mn-1);
}
ll Iterative2(ll a,ll b,ll mn){
	if(mn==1){
		return mn;
	}
	while(mn!=1){
		if(a%mn==0 && b%mn==0){
			return mn;
			break;
		}
		mn--;
	}
}
ll Logic2R(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	ll mn = min(a,b);
	return recur2(a,b,mn);
}
ll Logic2I(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	ll mn = min(a,b);
	return Iterative2(a,b,mn);
}