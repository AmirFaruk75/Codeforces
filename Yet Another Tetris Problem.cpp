#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],i,j,b=0,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(j=0;j<n-1;j++)
        {
            if((a[j+1]-a[j])%2!=0)
            {
                b=1;
            }
        }
        if(b==1)
        {
            cout<<"NO"<<endl;
            b=0;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}
