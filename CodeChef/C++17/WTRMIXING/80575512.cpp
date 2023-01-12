#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while (t--)
    {
    int a,b,x,y,c;
    cin>>a>>b>>x>>y;
    c =b-a;
    if (c<0)
    {
        //c=c*(-1);
        if(-c<=y)
            {
                cout<<"YES\n";
            }
        else cout<<"NO\n";
        
    }
    else if (c>0)
    {
        if(c<=x)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    else 
    {
        cout<<"YES\n";
    }
    }
	return 0;
}
