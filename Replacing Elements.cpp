#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,d,a[100000],i,j,b,c,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>d;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        b=a[0]+a[1];
        if(a[n-1]<=d)
        {
            cout<<"YES"<<endl;
        }
        else if(b<=d)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
