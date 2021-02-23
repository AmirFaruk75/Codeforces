#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],i,j,b=0,c=0,d,e,f,g=0,h,m[100000],k[100000];
    cin>>n;
    for(i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            continue;
        }
        if(b==0)
        {
            if(a[i]>a[n])
            {
                c=c+a[i];
                b=1;
                a[i]=a[i]-a[i];
            }
            else{
                c=c+a[n];
                n=n-1;
                i=1;
                b=1;
            }
        }
        else if(b==1){
            if(a[i]>a[n])
            {
                g=g+a[i];
                b=0;
                a[i]=a[i]-a[i];
            }
            else{
                g=g+a[n];
                n=n-1;
                i=1;
                b=0;
            }
        }
    }
    cout<<c<<" "<<g;
}
