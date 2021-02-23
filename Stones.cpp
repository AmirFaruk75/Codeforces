#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,a,b,c,d=0,e,f,g,h,i,j,n,m;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>a>>b>>c;
        for(i=0;i<100;i++)
        {

            if(c<0)
            {
                b=b+1;
                d=d-3;
                break;
            }
            if(b==0)
            {
                break;
            }
            if(c==0)
            {
                break;
            }
            c=c-2;
            b=b-1;
            d=d+3;
        }
        for(i=0;i<100;i++)
        {

            if(b<0)
            {
                d=d-3;
                break;
            }
             if(a==0)
            {
                break;
            }
            if(b==0)
            {
                break;
            }
            b=b-2;
            a=a-1;
            d=d+3;
        }
        cout<<d<<endl;
        d=0;
    }
}
