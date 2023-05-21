#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int i, n,k,t=0,c=0;
    cin>>n>>k;
    k=240-k;
    for(i=1;i<=n;i++)
    {
        t=t+i*5;
        if(t>k)
        {
            //i--;
            break;
        }
        c++;
    }
    cout<<c;
}