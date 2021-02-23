#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int k,n,i,j,a=0,b,c=0,d,e,f,g,h;
    cin>>k;
    n=d=19;
    for(i=0;;i++)
    {
        b=n%10;
        a=a+b;
        n=n/10;
        if(n<1)
        {
            if(a==10)
            {
                c++;
            }
            if(c==k)
            {
                break;
            }
            d=d+9;
            n=d;
            a=0;
        }
    }
    cout<<d;
}
