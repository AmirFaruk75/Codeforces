#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        if(n<k)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2!=0)
        {
            if(k%2==0)
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<n-(k-1)<<" ";
                for(j=0;j<k-1;j++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
        else{
            a=n/k;
            if(a<2)
            {
                if(k%2!=0)
                {
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                    b=(n-k)+1;
                    cout<<b<<" ";
                    for(j=0;j<k-1;j++)
                    {
                        cout<<1<<" ";
                    }
                    cout<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
                b=(k-1)*2;
                cout<<n-b<<" ";
                for(j=0;j<k-1;j++)
                {
                    cout<<2<<" ";
                }
                cout<<endl;
            }
        }
    }
}
