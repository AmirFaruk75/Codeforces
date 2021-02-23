#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,a,b,c,d,e,f,g,h,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        a=sqrt(n);
        if(a<k)
        {
            cout<<"NO"<<endl;
        }
        else{
            if(n%2==0)
            {
                if(k%2==0)
                {
                     cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(k%2==0)
                {
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
            }
        }
    }
}
