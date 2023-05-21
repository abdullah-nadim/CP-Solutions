#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
        {
            i++;
        }
    }
    cout<<i<<endl;
}