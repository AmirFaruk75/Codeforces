#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,i,j;
    cin>>n;
    int primes[n+1];
    for(i=0;i<=n;i++)
    {
        primes[i]=1;
    }
    primes[0]=0;primes[1]=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(primes[i]==1)
        {
            for(j=2;i*j<=n;j++)
            {
                primes[i*j]=0;
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(primes[i]==1)
        {
            cout<<i<<" ";
        }
    }
}
