#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,x,y,z,i,j,a[200005],c,b,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[j];
        }
        sort(a,a+3);
        if(a[1]!=a[2])
        {
            cout<<"NO"<<endl;
        }
        else{
            if(a[0]==a[1] && a[0]==a[2])
            {
                cout<<"YES"<<endl;
                cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
            }
            else{
                cout<<"YES"<<endl;
                cout<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
            }
        }
    }
}
