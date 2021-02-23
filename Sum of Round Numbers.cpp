#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a=10,b,c,d=0,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        f=n;
        for(j=0;j<5;j++)
        {
            b=n%10;
            if(b==0)
            {
                n=n/10;
                continue;
            }
            else{
                    d++;
                if(n<10)
                {
                    break;
                }
                n=n/10;

            }
        }
        cout<<d<<endl;
        d=0;
        for(j=0;j<5;j++)
        {
            if(f%10==0)
            {
                f=f/10;
                continue;
            }
            else{
                c=f%10;
                e=c*(pow(a,j));
                cout<<e<<" ";
                if(f<10)
                {
                    break;
                }
                f=f/10;
            }
        }
        cout<<endl;
    }
}
