#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[100000],b=0,c=0,d=0,e,f,g,h,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]%2==0)
            {
                b++;
            }
            else{
                c++;
            }
        }

        if(b%2==0 || c%2==0)
        {
            cout<<"YES"<<endl;
            b=0;
            c=0;
            continue;
        }
        else{
                sort(a,a+n);
            for(j=0;j<n-1;j++)
            {
                if((a[j+1]-a[j])==1)
                {
                    d++;
                    break;
                }
            }
        }
        if(d==1)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        b=0;c=0;d=0;
    }
}
