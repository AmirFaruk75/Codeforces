#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,b,f,p,h,c,i,a,d,e,g;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>p>>f>>h>>c;
        if(b==1)
        {
            cout<<0<<endl;
            continue;
        }
        a=b/2;
        d=(p*h)+(f*c);
        e=p+f;
        if(a>=e)
        {
            cout<<d<<endl;
        }
        else{
            g=e-a;
            if(h>=c)
            {
                if(f>=g)
                {
                    d=d-(c*g);
                    cout<<d<<endl;
                }
                else if(f<g)
                {
                    int m=g-f;
                    d=d-((c*f)+(h*m));
                    cout<<d<<endl;
                }
            }
            else if(h<c)
            {
                 if(p>=g)
                {
                    d=d-(h*g);
                    cout<<d<<endl;
                }
                else if(p<g)
                {
                    int m=g-p;
                    d=d-((h*p)+(c*m));
                    cout<<d<<endl;
                }
            }
        }
    }
}
