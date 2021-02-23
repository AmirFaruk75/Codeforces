#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],i,j,b,c,d,e,f,g,h,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        sum=sum+(a[i+1]-a[i]);
        i=i+1;
    }
    cout<<sum;
}
