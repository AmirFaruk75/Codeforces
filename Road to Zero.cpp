#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,x,y,a,b,c,e,d,f,g,h;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>a>>b;
        c=(x+y)*a;
        if(x<=y)
        {
            d=x*b;
            e=y-x;
            f=e*a;
            g=d+f;
            if(c>=g)
            {
                cout<<g<<endl;
            }
            else{
                cout<<c<<endl;
            }
        }
        else{
            d=y*b;
            e=x-y;
            f=e*a;
            g=d+f;
            if(c>=g)
            {
                cout<<g<<endl;
            }
            else{
                cout<<c<<endl;
            }

        }
    }
}
