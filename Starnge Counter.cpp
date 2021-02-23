#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,n,i,a=0,b=3,c,d,e,f,g,h;
    cin>>t;
    for(i=0;;i++)
    {
        a=a+b;
        if(a>=t)
        {
            a=(a-b)+1;
            break;
        }
        else{
            b=b*2;
        }
    }
    c=t-a;
    cout<<b-c<<endl;
}
