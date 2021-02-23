#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005],b[1005],c,d,e,f=0,g,h,i,j;
int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    sort(a,a+n);
    c=n-k;
    cout<<a[c]<<endl;
    for(i=c;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]>100)
            {
                continue;
            }
            if(a[i]==b[j])
            {
                cout<<j+1<<" ";
                if(b[j]==0)
                {
                    b[j]=b[j]+101;
                }
                else{
                b[j]=b[j]+100;
                }
                break;
            }
        }
    }

}
