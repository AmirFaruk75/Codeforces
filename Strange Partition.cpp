#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long t,n,x,a[200005],b,c,d,e,f,g,h,i,j,sum=0,cum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            cum=cum+a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%x==0)
            {
                b=a[i]/x;
            }
            else{
                b=(a[i]/x)+1;
            }
            sum=sum+b;
        }
        if(cum%x==0)
        {
            cout<<cum/x<<" "<<sum<<endl;
        }
        else{
            cout<<(cum/x)+1<<" "<<sum<<endl;
        }
        sum=0;cum=0;
    }
}
