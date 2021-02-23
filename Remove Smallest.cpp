#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a[100000],b=0,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>1)
            {
                b=1;
                break;
            }
        }
        if(b==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        b=0;
    }
}
