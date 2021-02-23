#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],b[100000],c=1,d,e,f,g,h,i,j,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n,greater<int>());
    for(i=1;i<n;i++)
    {
        sum=sum+((a[i]*i)+1);
    }
    cout<<sum+1<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                if(b[j]>1000)
                {
                    continue;
                }
                cout<<j+1<<" ";
                b[j]=b[j]+1000;
            }
        }
    }
}
