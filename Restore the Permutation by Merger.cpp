#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[10000],i,j,b,c,d,e,f,g,h;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n;
        for(i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<2*n;i++)
        {
            if(a[i]>100)
            {
                continue;
            }
            for(j=i+1;j<2*n;j++)
            {
                if(a[j]>100)
                {
                    continue;
                }
                if(a[i]==a[j])
                {
                    a[j]=a[j]+100;
                }
            }
        }
        for(i=0;i<2*n;i++)
        {
            if(a[i]>100)
            {
                continue;
            }
            else{
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
}
