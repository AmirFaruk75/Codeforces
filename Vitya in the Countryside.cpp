#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,a[10000],j,b,c,d,e,f,g,h;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        if(a[n]==15)
        {
            cout<<"DOWN";
        }
        else if(a[n]==0)
        {
            cout<<"UP";
        }
        else{
            cout<<-1;
        }
        return 0;
    }
    if(a[n]>a[n-1])
    {
        if(a[n]==15)
        {
            cout<<"DOWN";
        }
        else{
            cout<<"UP";
        }
    }
    else{
        if(a[n]==0)
        {
            cout<<"UP";
        }
        else{
            cout<<"DOWN";
        }
    }
}
