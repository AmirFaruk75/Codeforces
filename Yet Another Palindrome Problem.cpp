#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[10000],i,j,k,b=0,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        for(j=0;j<n;j++)
        {
            for(k=j+2;k<n;k++)
            {
                if(a[j]==a[k])
                {
                    b=1;
                    break;
                }
            }
            if(b==1)
            {
                break;
            }
        }
        if(b==1)
        {
            cout<<"YES"<<endl;
            b=0;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}
