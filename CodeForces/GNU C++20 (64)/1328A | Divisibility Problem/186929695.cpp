#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,temp,n=0;
        cin>>a>>b;
        if(a%b!=0)
        {
            temp= a/b+1;
            n=temp*b-a;
        }
        cout<<n<<endl;
    }
 
}