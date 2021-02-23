#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,a,b,n,i,j,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>=b)
        {
            c=a-b;
        }
        else{
            c=b-a;
        }
        if(c%10==0)
        {
            cout<<c/10<<endl;
        }
        else{
            cout<<(c/10)+1<<endl;
        }
    }
}
