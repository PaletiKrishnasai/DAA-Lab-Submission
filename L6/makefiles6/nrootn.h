using namespace std;
#define ll long long int

int primalitycheck(ll n)
{
    ll k,f=0;
    //cout<<"Enter n :"<<endl;
    //cin>>n;
    
    for(ll i=2;i<=sqrt(n);i++)
    {
        k=n;

        while(k>0)
        {
            k-=i;
        }

        if(k==0)
        {
            f++;
            break;
        }
    }

    if(f==0)
    {
        return 1;
    }
   else
   	return 0;
}
