#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a,b,c,d=0,e,f,g,h;
    cin>>n>>m;
    if(n==1 && m==1)
    {
        cout<<2;
        return 0;
    }
    for(i=1;i<=n;i++)
    {
        a=pow(i,2);
        if(a<=n)
        {
            b=n-a;
            c=sqrt(a)+(b*b);
            if(c==m)
            {
                d++;
            }
        }
        else{
            break;
        }
    }
    cout<<d;
}
