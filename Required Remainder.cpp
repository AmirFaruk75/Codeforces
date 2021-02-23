#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,x,y,n,i,j,a,b,c,d,e,f,g,h,rem;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>n;
        rem=n%x;
        if(rem>=y)
        {
            a=rem-y;
            cout<<n-a<<"\n";
        }
        else{
        a=rem+1;
        b=(x-1)-y;
        cout<<n-(a+b)<<"\n";
        }
    }
}
