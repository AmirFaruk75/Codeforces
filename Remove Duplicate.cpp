#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[10000],i,j,b=0,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]>1000)
        {
            continue;
        }
        for(j=i-1;j>=0;j--)
        {
            if(a[i]==a[j])
            {
                a[j]=a[j]+1000;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>1000)
        {
            continue;
        }
        else{
        b++;
        }
    }
    cout<<b<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]>1000)
        {
            continue;
        }
        else{
        cout<<a[i]<<" ";
        }
    }
}
