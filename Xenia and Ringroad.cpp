#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m,a[100000],b,c,d,e,f,g,h,i,j,sum=0;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<m-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            sum=sum+(a[i+1]-a[i]);
        }
        else{
            sum=sum+((n-a[i])+(a[i+1]-0));
        }
    }
    cout<<sum+(a[0]-1);
}
