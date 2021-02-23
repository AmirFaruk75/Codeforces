#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t[10000],a=0,b=0,c=0,d=0,e,f=0,i,j,g=0,h,k=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>t[i];
    }
    for(i=1;i<=n;i++)
    {
        if(t[i]==1)
        {
            a++;
        }
        else if(t[i]==2)
        {
            b++;
        }
        else{
            c++;
        }
    }
    if(a==0 || b==0 || c==0)
    {
        cout<<0;
        return 0;
    }
    else{
        if(a<=b && a<=c)
        {
            cout<<a<<endl;
            e=a*3;
        }
        else if(b<=a && b<=c)
        {
            cout<<b<<endl;
            e=b*3;
        }
        else{
            cout<<c<<endl;
            e=c*3;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(t[i]==0)
        {
            continue;
        }
        if(t[i]==1 && f==0)
        {
            f=1;
            cout<<i<<" ";
            t[i]=t[i]-1;
            i=1;
            d++;
        }
        if(t[i]==2 && f==1 && g==0)
        {
            g=1;
            cout<<i<<" ";
            t[i]=t[i]-2;
            i=1;
            d++;
        }
        if(t[i]==3 && f==1 && g==1)
        {
            cout<<i<<" ";
            t[i]=t[i]-3;
            i=1;
            d++;
            k++;
        if(k==e/3)
        {
            break;
        }
        }
        if(d==3)
        {
            d=0;
            f=0;
            g=0;
            cout<<endl;
        }
    }

}
