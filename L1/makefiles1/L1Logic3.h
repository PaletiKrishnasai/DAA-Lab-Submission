#define ll long long int
ll recur3(ll a,ll b){
	if(a>b){
		if(a%b==0){
			return b;
		}
		a=a%b;
		return recur3(a,b);
	}
	else{
		if(b%a==0){
			return a;
		}
		b=b%a;
		return recur3(a,b);	
	}
}
ll Iterative3(ll a,ll b){
	while(1){
		if(a>b){
			if(a%b==0){
				return b;
				break;
			}
			a=a%b;
		}
		else{
			if(b%a==0){
				return a;
				break;	
			}
			b=b%a;
		}
	}
}
ll Logic3R(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	return recur3(a,b);
}
ll Logic3I(ll a,ll b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	return Iterative3(a,b);
}