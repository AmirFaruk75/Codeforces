#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[10000],b=0,c,i,j,d=0,e=0,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            if(a[j]%2==0)
            {
                d++;
            }
            else{
                e++;
            }
        }
        if((d%2==0 || e%2==0 || d==e) && n>2)
        {
            cout<<"YES"<<endl;
            d=0;e=0;
        }
        else{
        sort(a,a+n);
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]-a[j]==1)
            {
                b++;
            }
        }
        for(j=0;j<n-1;j++)
        {
            if((a[j]%2==0 && a[j+1]%2==0) || (a[j]%2!=0 && a[j+1]%2!=0))
            {
                b++;
            }
            j=j+1;
        }
        c=n/2;
        if(b>=c)
        {
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
        b=0;
        }
        d=0;e=0;
    }
}
