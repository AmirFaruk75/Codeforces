#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,i,j,n,a[100000],b=0,c,d,e,f,g,h;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<=n;i++)
        {
            if(a[i]!=1)
            {
                break;
            }
            else{
                b++;
            }
        }
        if(b==0)
        {
            cout<<"First"<<endl;
        }
        else if(b==n)
        {
            if(n%2==0)
            {
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
        else{
            if(b%2==0)
            {
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        b=0;
    }
}