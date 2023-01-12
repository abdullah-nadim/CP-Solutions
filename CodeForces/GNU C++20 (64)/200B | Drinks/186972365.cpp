#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    float t,s=0;
    t=n;
    while(n--)
    {
        float p;
        cin>>p;
        s+=p;
    }
    std::cout << std::setprecision(10) << std::fixed;
    std::cout<<s/t<<"\n";
}