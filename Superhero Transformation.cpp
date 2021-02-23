#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int i,j,a,b,c,d,e,f,g,h;
    string s,t;
    cin>>s>>t;
    a=s.length();
    b=t.length();
    if(a!=b)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else{
        for(i=0;i<a;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    c=1;
                }
                else{
                    cout<<"NO";
                    return 0;
                }
            }
            else{
                if(t[i]=='a' || t[i]=='e' || t[i]=='i' || t[i]=='o' || t[i]=='u')
                {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
