#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,x,a[100000],i,j,b=0,c=0,d=0,e,f,g,h,sum=0,cum;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
            if(a[i]%x==0)
            {
                b++;
            }
        }
        cum=sum;
        if(b==n)
        {
            cout<<-1<<endl;
        }
        else{
            if(sum%x!=0)
            {
                cout<<n<<endl;
            }
            else{
                for(i=0;i<n;i++)
                {
                    sum=sum-a[i];
                    if(sum%x!=0)
                    {
                        c++;
                        break;
                    }
                    else{
                        c++;
                    }
                }
                for(i=n-1;i>=0;i--)
                {
                    cum=cum-a[i];
                    if(cum%x!=0)
                    {
                        d++;
                        break;
                    }
                    else{
                        d++;
                    }
                }
                e=n-c;
                f=n-d;
                if(e>=f)
                {
                    cout<<e<<endl;
                }
                else{
                    cout<<f<<endl;
                }
            }
        }
        b=0;sum=0;c=0;d=0;
    }
}
