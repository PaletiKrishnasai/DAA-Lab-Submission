#define ll long long int
ll recur1(ll a,ll b){
	if(a==b)
		return a;
	if(a>b)
		a=a-b;
	else
		b=b-a;
	return recur1(a,b);
}
ll Iterative1(ll a,ll b){
	while(a!=b){
		if(a>b)
			a = a-b;
		else
			b = b-a;
	}
	return a;
}
ll Logic1R(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	return recur1(a,b);
}
ll Logic1I(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	return Iterative1(a,b);
}
