#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        b=(n*(n+1))/2;

        for(i=0;;i++)
        {
            a=pow(2,i);
            if(a>n)
            {
                break;
            }
            else{
                b=b-(a*2);
            }
        }
        cout<<b<<endl;
    }
}
