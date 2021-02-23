#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,a,j,b,c,d,e,f,g,h;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        a=s.length();
        for(i=0;i<a;i++)
        {
            if(i%2==0)
            {
                if(s[i]=='a')
                {
                    cout<<'b';
                }
                else{
                    cout<<'a';
                }
            }
            else{
                if(s[i]=='z')
                {
                    cout<<'y';
                }
                else{
                    cout<<'z';
                }
            }
        }
        cout<<endl;
    }
}
