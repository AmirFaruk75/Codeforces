#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[1000000],l,j,b=0,c=0,d=0,e=0,g,h,f;
    int n,i;
    cin>>n>>l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    g=a[0]-0;
    h=l-a[n-1];

    for(i=0;i<n;i++)
    {
        c=c+(a[i+1]-a[i]);
        if(c>b)
        {
            b=c;
        }
        c=0;
    }
    f=b/2;
    if(f>=g && f>=h)
    {
        printf("%.10lf",f);
    }
    else if(g>=f && g>=h)
    {
        printf("%.10lf",g);
    }
    else{
       printf("%.10lf",h);
    }
}
