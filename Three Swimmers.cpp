#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,p,a,b,c,d,e,f,g,h,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%b==0 || p%c==0)
        {
            cout<<0<<endl;
        }
        else{
            d=(p/a)+1;
            e=(p/b)+1;
            f=(p/c)+1;
            g=(a*d)-p;
            h=(b*e)-p;
            i=(c*f)-p;
            if(g<=h && g<=i)
            {
                cout<<g<<endl;
            }
            else if(h<=g && h<=i)
            {
                cout<<h<<endl;
            }
            else{
                cout<<i<<endl;
            }
        }
    }
}
