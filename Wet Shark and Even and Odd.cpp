#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a[100000],b=0,c=0,i,j,d,e,f,g,h,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            b++;
        }
        sum=sum+a[i];
    }
    sort(a,a+n);
    if(sum%2==0)
    {
        cout<<sum;
    }
    else{
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                sum=sum-a[i];
                break;
            }
        }
        cout<<sum;
    }
}
