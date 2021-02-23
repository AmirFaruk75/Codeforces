#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int s,a,b,c,d,e,t,i,f;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s>>a>>b>>c;
        d=s/c;
        e=d/a;
        f=e*b;
        cout<<d+f<<endl;
    }
}
