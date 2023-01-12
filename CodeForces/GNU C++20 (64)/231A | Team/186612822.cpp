#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,t,m=0;
    cin>>n;
    int arr[n][3];
    for(int i =0;i<n;i++)
    {
        t=0;
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]==1)
            {
                t++;
            }
        }
        if(t>1)
            m++;
    }
    cout<<m<<endl;
}