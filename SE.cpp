#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,prime[100000],i,j,a,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        prime[i]=1;
    }
    prime[0]=0;prime[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(prime[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                prime[i*j]=0;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(prime[i]==1)
        {
            cout<<i<<" ";
        }
    }
}
