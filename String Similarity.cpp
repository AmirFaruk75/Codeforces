#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a=1,b=0,d,e,f,g,h;
    char c;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        for(i=0;i<(2*n)-2;i++)
        {
            for(j=i+1;j<(2*n)-1;j++)
            {
                if(s[i]==s[j])
                {
                    a++;
                }
                else{
                    break;
                }
            }
            if(a>b)
            {
                b=a;
                c=s[i];
            }
            a=1;
        }
        if(n==1)
        {
            cout<<s<<endl;
        }
        else{
            for(i=0;i<n;i++)
            {
                cout<<c;
            }
            cout<<endl;
        }
        a=1;b=0;
    }
}
