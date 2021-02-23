#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,x,a,b,i,j,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>x>>a>>b;
        if(a>=b){
            c=n-a;
            d=b-1;
            e=c+d;
            if(x>e)
            {
                cout<<(a-b)+e<<endl;
            }
            else{
                cout<<(a-b)+x<<endl;
            }
        }
         else if(a<b){
            c=n-b;
            d=a-1;
            e=c+d;
            if(x>e)
            {
                cout<<(b-a)+e<<endl;
            }
            else{
                cout<<(b-a)+x<<endl;
            }
        }
    }
}
