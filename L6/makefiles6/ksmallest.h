using namespace std;
#define ll1 long long 

//ll partition(ll a[], ll low, ll high);
//ll kthsmallest(ll a[], ll low, ll high, ll k);



ll1 partition(ll1 a[], ll1 low, ll1 high)
{
    ll1 pivot=a[high];
    ll1 i=low-1;
    
    for(ll1 j=low;j<high;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }

    swap(a[i+1],a[high]);
    
    return i+1;
}

ll1 kthsmallest(ll1 a[], ll1 low, ll1 high, ll1 k)
{
    ll1 p=partition(a,low,high);
    
    if(p==k-1)
    return a[p];
    else if(p>k-1)
    {
        return kthsmallest(a,low,p-1,k);
    }
    else
    {
        return kthsmallest(a,p+1,high,k);
    }
    
}


