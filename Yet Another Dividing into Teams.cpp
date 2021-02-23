#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int q,n,a[10000],b=0,c=0,i,j;
    cin>>q;
    for(j=0;j<q;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]==1)
            {
                b=1;
                break;
            }
        }
        if(b==1)
        {
            cout<<2<<endl;
            b=0;
        }
        else{
            cout<<1<<endl;
        }
    }
}
