#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a,b,c,d,e,f,g,h,i,j;
    cin>>n>>a>>b;
    d=a;
    if(b>0)
    {
        for(i=a;i<=b;i++)
        {
            if(d==n)
            {
                d=1;
            }
            else{
                d++;
            }
        }
        cout<<d;
    }
}
