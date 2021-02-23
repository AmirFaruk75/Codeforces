#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b=0,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            continue;
        }
        else if(a[i]==a[i+1])
        {
            b=b+1;
            a[i+1]=a[i+1]+1;
        }
        else{
            b=b+1+(a[i]-a[i+1]);
            a[i+1]=a[i+1]+(a[i]-a[i+1])+1;
        }
    }
    cout<<b;
}
