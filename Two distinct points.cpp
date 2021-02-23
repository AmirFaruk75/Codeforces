#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int q,l1,r1,l2,r2,i,j,a,b,c,d,e,f,g,h;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>l1>>r1>>l2>>r2;
        cout<<l1<<" ";
        if(l1!=l2)
        {
            cout<<l2<<endl;
        }
        else{
            cout<<r2<<endl;
        }
    }
}
