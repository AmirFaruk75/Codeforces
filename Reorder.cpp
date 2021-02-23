#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,a[100000],i,j,b=0,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b=b+a[i];
        }
        if(b==m)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        b=0;
    }
}
