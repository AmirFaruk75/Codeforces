#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b=0,c=0,d=0,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(d==0)
        {
            if(a[i]>a[n-1])
            {
                b=b+a[i];
                d=1;
            }
            else{
                b=b+a[n-1];
                d=1;
                n=n-1;
                i=i-1;
            }
        }
        else{
            if(a[i]>a[n-1])
            {
                c=c+a[i];
                d=0;
            }
            else{
                c=c+a[n-1];
                d=0;
                n=n-1;i=i-1;
            }
        }
    }
    cout<<b<<" "<<c;
}
