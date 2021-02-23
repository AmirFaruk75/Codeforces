#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=1 && n<=9)
        {
            cout<<n<<endl;
        }
        else if(n>=10 && n<=17)
        {
            a=n%10;
            cout<<a+1<<9<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
