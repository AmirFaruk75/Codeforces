#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,a=0,b=0,c,d,e,f,g,h;
    string s,t={a};
    cin>>n;
    cin>>s;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i]==s[j] && s[i+1]==s[j+1])
            {
                a++;
            }
        }
        if(a>b)
        {
            b=a;
            t.clear();
            t+=s[i];
            t+=s[i+1];
        }
        a=0;
    }
    if(b==0)
    {
        cout<<s[0]<<s[1];
    }
    else{
        cout<<t;
    }

}
