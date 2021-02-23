#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s[100000],i,j,a=0,b=0,c=0,d=0,e=0,f,g=0,h,sum=0,q,w,r,p=0,k,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]==1)
        {
            d++;
            sum=sum+s[i];
        }
        else if(s[i]==2)
        {
            a++;
            g=g+2;
        }
        else if(s[i]==3)
        {
            b++;
        }
        else if(s[i]==4){
            c++;
        }
    }
    sort(s,s+n);
    n=n-c;
    for(i=n-1;i>=d+a;i--)
    {
        sum=sum-1;
        if(sum<0)
        {
            sum=sum+1;
            break;
        }
        if(sum==0)
        {
            e++;
            break;
        }
        else{
            e++;
        }
    }
    f=b-e;
    if(f>0)
    {
        e=e+f;
    }
    else{
        e=e;
    }
    if(g==0)
    {
        if(sum>0)
        {
            if(sum%4==0)
            {
                r=sum/4;
            }
            else{
                r=(sum/4)+1;
            }
            cout<<c+e+r;
            return 0;
        }
        else if(sum<=0)
        {
            cout<<c+e;
            return 0;
        }
    }
    else{
        q=g/4;
        w=g%4;
        if(sum<=0)
        {
            h=q+(w/2);
        }
        else if(sum>0)
        {
            if(w!=0){
            sum=sum-2;
            if(sum>=0)
            {
                h=q+1;
            }
            else{
                    h=q;
                sum=sum+2;
            }
            }
            else{
                h=q;
            }
        }
        if(sum>0)
        {
            if(sum%4==0)
            {
                r=sum/4;
            }
            else{
                r=(sum/4)+1;
            }
            cout<<c+e+h+r;
        }
        else{
            cout<<c+e+h;
        }
    }
}

