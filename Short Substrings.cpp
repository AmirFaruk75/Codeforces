#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,a,b,c,d,e,f,g,h,j;
    cin>>n;
    string s,w;
    for(i=0;i<n;i++)
    {
        cin>>s;
        a=s.length();
        for(j=0;j<a;j++)
        {
            w=w+s[j];
            j=j+1;
        }
        w+=s[a-1];
        cout<<w<<endl;
        w.clear();
    }
}
