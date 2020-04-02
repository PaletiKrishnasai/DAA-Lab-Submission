#include<bits/stdc++.h>
#include"makefiles2/sumexists.h"
#include"makefiles2/minusone.h"
#include"makefiles2/pattern.h"
#define nl endl
#define ll long long int
#define vl vector<ll>
#define size 1<<20
using namespace std;


int main()
{
    /*Question 1*/
    cout << "Q1 :" << nl;
    cout << "Enter the array size followed by the array : ";
    ll n;
    cin >> n;
    vl a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << "enter p "<<nl;
    ll p;
    cin >> p;
    if(sumexist(a,p))
        cout << "yes sum exists "<<nl;
    else 
        cout << "sum dosen't exist"<<nl;
    if(sumexistbs(a,p))
        cout << "yes sum exists "<<nl;
    else 
        cout << "sum dosen't exist"<<nl;
    if(sumexisthash(a,p))
        cout << "yes sum exists "<<nl;
    else 
        cout << "sum dosen't exist"<<nl;

    /*Question 2*/

    ll b[size] ={-1};
    for(int i=0;i<size;i++)
    {
        int x;
        if(x)
            cin >> a[i];
        else 
            break;
    }
    cout << "the position of the first -1 is : " << positionls(a)<<nl;
    cout << "the position of the first -1 is : " << positionbs(a)<<nl;
    cout << "the position of the first -1 is : " << positionpow(a,0)<<nl;

    /*Question 3*/
    cout<<"Enter the number of rows in the triangle i.e. the number of elements in the array"<<endl;
	ll v;
    cin>>v;
    p1(v);
    p2(v);
    p3(v);
    p4(v);
    p5(v);
    
    return 0;
}