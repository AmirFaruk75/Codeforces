#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,t[100005],i,j=0,pt[100005];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    sort(t,t+n);
    pt[0]=0;
    for(i=1;i<n;i++)
    {
        pt[i]=pt[i-1]+t[i-1];
        if(pt[i]>t[i])
        {
            t[i]=0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(t[i]>0)
        {
            j++;
        }
    }
    cout<<j;
}
