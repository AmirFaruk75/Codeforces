#include<bits/stdc++.h>
using namespace std;
struct pack
{
    int a;
    int b;
};
struct pack x[100000];
bool comp(pack A, pack B)
{
    if (A.a==B.a) return A.b<B.b;
    else return A.a<B.a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,j,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i].a>>x[i].b;
    }
    sort(x,x+n,comp);
    for(i=0;i<n;i++)
    {
        cout<<x[i].a<<" "<<x[i].b<<endl;
    }
}
