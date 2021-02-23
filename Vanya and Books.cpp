#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,m,i,j,a,b[100000],c=1,d,e,f,g,h,sum=0,cum=0;
    cin>>n;
    a=n;
    for(j=0;;j++)
    {
        n=n/10;
        m++;
        if(n==0)
        {
            break;
        }
    }
    for(i=1;i<m;i++)
    {
        b[i]=9*c;
        c=c*10;
        sum=sum+b[i];
    }
    b[m]=a-sum;
    for(i=1;i<=m;i++)
    {
        b[i]=b[i]*i;
        cum=cum+b[i];
    }
    cout<<cum;
}
