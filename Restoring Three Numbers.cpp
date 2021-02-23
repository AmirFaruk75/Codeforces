#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,x1,x2,x3,x4,i,j;
    cin>>x1>>x2>>x3>>x4;
    if(x1>x2 && x1>x3 && x1>x4)
    {
        c=x1-x2;
        a=x3-c;
        b=x4-c;
        cout<<a<<" "<<b<<" "<<c;
    }
    else if(x2>x1 && x2>x3 && x2>x4)
    {
        c=x2-x1;
        a=x3-c;
        b=x4-c;
        cout<<a<<" "<<b<<" "<<c;
    }
    else if(x3>x1 && x3>x2 && x3>x4)
    {
        c=x3-x1;
        a=x2-c;
        b=x4-c;
        cout<<a<<" "<<b<<" "<<c;
    }
    else
    {
        c=x4-x1;
        a=x2-c;
        b=x3-c;
        cout<<a<<" "<<b<<" "<<c;
    }

}
