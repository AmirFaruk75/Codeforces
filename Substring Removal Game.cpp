#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b[1000],c=0,d,e,f,g,h,sum=0;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=s.length();
        for(i=0;i<a;i++)
        {
            if(s[i]=='1')
            {
                for(j=i+1;j<a;j++)
                {
                    if(s[i]==s[j])
                    {
                        c++;
                    }
                    else{
                        break;
                    }
                }
                b[i]=c+1;
                i=i+c;
                c=0;
            }

        }
        sort(b,b+a,greater<int>());
        for(i=0;i<a;i=i+2)
        {
            sum=sum+b[i];
        }
        cout<<sum<<endl;
        c=0;sum=0;
        for(i=0;i<a;i++)
        {
            b[i]=0;
        }

    }
}
