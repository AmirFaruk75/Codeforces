#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int q,a[100000],b,c,d,e,f,g,h,i,j;
    cin>>q;
    for(i=0;i<q;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[j];
        }
        sort(a,a+3);
        b=((a[1]-a[0])+(a[2]-a[0])+(a[2]-a[1]));
        if(b<=4)
        {
            cout<<0<<endl;
        }
        else{
            cout<<b-4<<endl;
        }
    }
}
