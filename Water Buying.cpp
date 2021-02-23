#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int q,n,a,b,i,j,c,d,e,f,g,h;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>n>>a>>b;
        c=n*a;
        if(n%2==0)
        {
            d=(n/2)*b;
        }
        else{
            d=(b*(n/2))+a;
        }
        if(c<=d)
        {
            cout<<c<<endl;
        }
        else{
            cout<<d<<endl;
        }

    }
}
