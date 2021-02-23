    #include<bits/stdc++.h>
    using namespace std;
    struct pack
    {
        int a;
        int b;

    };

    struct pack x[100000],temp;

    bool comp(pack A,pack B){
     if ( A.a==B.a)  return A.b < B.b;
     else return A.a < B.a;
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        int t,i,j,c=0,d,e,f,g,h,n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            for(i=0;i<n;i++)
            {
                cin>>x[i].a>>x[i].b;

            }
            sort(x,x+n,comp);
            for(i=0;i<n-1;i++)
            {
                if(x[i+1].a<x[i].a)
                {
                    c=1;
                    break;
                }
                if(x[i+1].b<x[i].b)
                {
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                cout<<"NO"<<endl;
            }
            else{
                    cout<<"YES"<<endl;
                for(i=0;i<n;i++)
                {
                    d=x[i].a-x[i-1].a;
                    e=x[i].b-x[i-1].b;
                    for(j=0;j<d;j++)
                    {
                        cout<<"R";
                    }
                    for(j=0;j<e;j++)
                    {
                        cout<<"U";
                    }
                }
                cout<<endl;
            }
            c=0;
        }
    }
