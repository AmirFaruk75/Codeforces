#include<bits/stdc++.h>
using namespace std;
int t,n,a[200005],i,j,b=0,c=0,d,e,f,g,h;
int main()
{
    ios_base::sync_with_stdio(false);

    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            else{
                b=b+((c+1)/a[i]);
                c=(c+1)%a[i];
            }
        }
        cout<<b<<endl;
        b=0;c=0;
    }
}

