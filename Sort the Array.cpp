#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],s[100000],i,j,b=0,c,d,e=0,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s[i]=a[i];
    }
    sort(s,s+n);
    for(i=0;i<n;i++)
    {
        if(a[i]!=s[i])
        {
            b++;
        }
    }
    if(b==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]-s[i]>0)
        {
            c=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]-s[i]<0)
        {
            d=i;
            break;
        }
    }

    reverse(a+c,a+d+1);
    for(i=0;i<n;i++)
    {
        if(a[i]-s[i]!=0)
        {
            e++;
        }
    }
    if(e>0)
    {
        cout<<"no";
    }
    else{
        cout<<"yes"<<endl;
        cout<<c+1<<" "<<d+1;
    }

}
