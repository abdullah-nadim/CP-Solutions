#include<bits/stdc++.h>
using namespace std;
 
int multiple(int a, int b)
{
    int val = 1;
    int c=a;
    while((c%10)!=b && c%10!=0)
    {
        c=c+a;
    }
    val = c/a;
    return val;
}
int main()
{
    int r,k;
    cin>>r>>k;
    cout<<multiple(r,k)<<endl;
}