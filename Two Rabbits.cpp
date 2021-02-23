#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,a,b,c,i,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x>>y>>a>>b;
        c=y-x;
        d=a+b;
        if(c%d==0)
        {
            cout<<c/d<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
