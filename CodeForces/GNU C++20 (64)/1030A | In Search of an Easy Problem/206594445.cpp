#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    bool check = false;
    cin>>n;
    int a[n];
    for(int i =0 ; i<n; i++)
    {
        cin>>a[i];
    }
 
    for(int i =0 ; i<n; i++)
    {
        if(a[i]==1)
        {
            check = true;
        }
    }
    if(check)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;
 
}