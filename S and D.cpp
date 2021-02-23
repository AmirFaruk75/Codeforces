#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],i,j,b=0,c=0,d,e,f,g=0,h;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        if(a[i]<a[n-i] && g==0)
        {
            b=b+a[n-i];
            i=0;
            g=1;
            n=n-1;
        }
        else if(a[i]>a[n-i] && g==0)
        {
            b=b+a[i];
            g=1;
            a[i]=0;
        }
        else if(a[i]<a[n-i] && g==1)
        {
            c=c+a[n-i-1];
            i=0;
            g=0;
            n=n-1;
        }
        else if(a[i]>a[n-i] && g==1)
        {
            c=c+a[i];
            g=0;
            a[i]=0;
        }
    }
    cout<<b<<" "<<c;
}

