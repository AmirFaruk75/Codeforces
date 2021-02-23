#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a=0,b,c=0,d,e,f,g,h;
    string s;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='8')
            {
                b=i;
                c=1;
                break;
            }
        }
         if(c==0)
         {
             cout<<"NO"<<endl;
         }
         else{
            d=(n-1)-b;
            if(d>=10)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
         }
         a=0;c=0;
    }
}
