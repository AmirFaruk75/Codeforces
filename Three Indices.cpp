#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,p[100000],i,j,k,l,a=0,b,c=0,d,e,f,g,h;
    cin>>t;
    for(l=0;l<t;l++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>p[i];
        }
        for(i=1;i<=n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if(p[i]<p[j])
                {
                    b=j;
                    a=1;
                    break;
                }
            }
            if(a==1)
            {
                for(k=b+1;k<=n;k++)
                {
                    if(p[b]>p[k])
                    {
                        cout<<"YES"<<endl;
                        cout<<i<<" "<<b<<" "<<k<<endl;
                        c=1;
                        break;
                    }
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        a=0;c=0;
    }
}
