#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,j,n,m=0,d,e,f,g,h;
    string a,b,c;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>a>>b>>c;
        d=a.length();
        for(i=0;i<d;i++)
        {
            if(c[i]!=a[i] && c[i]!=b[i])
            {
                m=1;
                break;
            }
        }
        if(m==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        m=0;
    }
}
