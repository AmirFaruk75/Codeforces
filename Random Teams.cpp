#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,a,b,c,d,e,f,g,h,i;
    cin>>n>>m;
    a=n-(m-1);
    b=(a*(a-1))/2;
    if(n%m==0)
    {
        c=n/m;
        d=(c*(c-1))/2;
        e=d*m;
    }
    else{
        c=(n/m)+1;
        d=n/m;
        f=n%m;
        g=m-f;
        h=(c*(c-1))/2;
        i=(d*(d-1))/2;
        e=h*f+i*g;
    }
    cout<<e<<" "<<b;
}
