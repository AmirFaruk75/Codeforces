#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b=0,c=0,d=0,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            b++;
            continue;
        }
        if(b>c)
        {
            c=b;
        }
        b=0;
    }
    cout<<c+1<<" ";
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            continue;
        }
        else{
            d++;
        }
    }
    cout<<d+1;
}
