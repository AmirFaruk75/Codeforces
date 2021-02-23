#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[10000],i,j,b=0,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
        {
            b++;
        }
    }
    cout<<b<<endl;
    for(i=1;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<a[i-1]<<" ";
        }
    }
    cout<<a[n-1];
}
