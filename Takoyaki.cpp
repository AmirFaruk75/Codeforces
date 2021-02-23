#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,x,t,i,h,j,a,b;
    cin>>n>>x>>t;
    if(n%x==0)
    {
        a=n/x;
    }
    else{
        a=(n/x)+1;
    }
    cout<<t*a<<endl;
}
