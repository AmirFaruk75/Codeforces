#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a[1000],b[1000],i,j,c=0,d=0,e=0,f;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;

    for(j=0;j<n;j++)
    {
        cin>>a[j];
        c=c+a[j];
    }
    sort(a,a+n);
    for(j=0;j<n;j++)
    {
        cin>>b[j];
        d=d+b[j];
    }
    sort(b,b+n,greater<int>());

        for(j=0;j<k;j++)
        {
            if(a[j]<=b[j])
            {
                a[j]=b[j];
            }
        }

        for(j=0;j<n;j++)
        {
            e=e+a[j];
        }
    cout<<e<<endl;
    c=0;
    d=0;e=0;
    }

}
