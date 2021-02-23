#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,z,a[100000],i,j,b,c=0,d,e,f,g,h;
    cin>>n>>m>>z;
    if(n>z || m>z)
    {
        cout<<0<<endl;
    }
    else{
        for(i=1;i<=z/m;i++)
        {
            a[i]=m*i;
        }
        for(i=1;i<=z/n;i++)
        {
            b=n*i;
            for(j=1;j<=z/m;j++)
            {
                if(b==a[j])
                {
                    c++;
                }
            }
        }
        cout<<c;
    }
}
