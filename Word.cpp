#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,b=0,c=0;
    string s;
    cin>>s;
    a=s.length();
    for(i=0;i<a;i++)
    {
        if(s[i]<97)
        {
            b++;
        }
        else{
            c++;
        }
    }
    for(i=0;i<a;i++)
    {
        if(b>c)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]=s[i]-32;
            }
            cout<<s[i];
        }
        else{
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]=s[i]+32;
            }
            cout<<s[i];
        }
    }
}
