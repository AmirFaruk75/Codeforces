#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,i,j,a=0,b,c,d,e,f,g,h;
    cin>>n>>m;
    if(m<=n)
    {
        cout<<n-m;
        return 0;
    }
    while(n<m)
    {
        if(m%2==0)
        {
            m=m/2;
        }
        else{
            m++;
        }
        a++;
    }
    cout<<a+(n-m);
}
