#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,i,j,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>=b)
        {
            c=a/2;
            if(b<c)
            {
                cout<<b<<endl;
            }
            else{
                d=b-c;
                e=a%2;
                f=d+e;
                g=f/3;
                cout<<c+g<<endl;
            }
        }
        else{
            c=b/2;
            if(a<c)
            {
                cout<<a<<endl;
            }
            else{
                d=a-c;
                e=b%2;
                f=e+d;
                g=f/3;
                cout<<c+g;
            }
        }
    }
}
