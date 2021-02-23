#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n, k, l, c, d, p, nl, np,a,b,m;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    a=(k*l)/nl;
    b=(c*d);
    m=(p/np);
    if(a<=b && a<=m)
    {
        cout<<a/n;
    }
    else if(b<=a && b<=m)
    {
        cout<<b/n;
    }
    else{
        cout<<m/n;
    }
}
