#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,a,b,c,d,e,f;
    cin>>n>>m;
    if(n<m)
    {
        cout<<n;
        return 0;
    }
    else if(n==m)
    {
        cout<<n+1;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        a=n/m;
        b=n-a;
        n=n+b;
    }
}
