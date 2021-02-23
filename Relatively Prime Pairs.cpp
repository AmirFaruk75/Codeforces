#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int l,r,i,j,a,b,c,d,e,f,g,h;
    cin>>l>>r;
    a=((r-l)+1)/2;
    if(a>300000)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        for(i=0;i<a*2;i=i+2)
        {
            cout<<l+i<<" "<<l+i+1<<endl;
        }
    }
}
