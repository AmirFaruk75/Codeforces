#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a,b,i,j,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        cin>>a>>b;

        if(x==y)
        {
            g=b*x;
            h=a*(x+y);
            if(g>=h)
            {
                cout<<h<<endl;
            }
            else{
                cout<<g<<endl;
            }
        }
        c=(x+y)*a;
        if(x<y)
        {
            d=y-x;
            if(x<=b)
            {
                e=(x*b)+(a*d);
            }
            else{
                e=(((x-b)+(y-b))*a)+(b*b);
            }
            if(c>=e)
            {
                cout<<e<<endl;
            }
            else{
                cout<<c<<endl;
            }

        }
        else if(x>y)
        {
            d=x-y;
            if(y<=b)
            {
                e=(y*b)+(d*a);
            }
            else{
                e=(((x-b)+(y-b))*a)+(b*b);
            }
            if(c>=e)
            {
                cout<<e<<endl;
            }
            else{
                cout<<c<<endl;
            }

        }

    }
}
