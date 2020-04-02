#include<bits/stdc++.h>
using namespace std;
int TOH(int n,int a ,int b, int c)
{   int count=0;

    if(n>0)
    {
     count=TOH(n-1,a,c,b);
        count++;
        count+=TOH(n-1,b,a,c);
    }
    return count;
}
int Logic4(int n)
{
    return TOH(n,1,2,3);
}