#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,d,w,s=0;
    cin>>k>>d>>w;
    for(int i=1;i<=w;i++)
    {
        s+=(i*k);
    }
    if(s>d)
    {
        cout<<s-d;
    }
    else
        cout<<0;
}
 
 