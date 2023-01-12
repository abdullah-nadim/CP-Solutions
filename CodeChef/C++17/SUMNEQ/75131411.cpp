#include <iostream>

using namespace std;

int main()
{
    int n,t=0;
    cin >> n;
    for(int i =1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==n)
            {
                t++;
            }
        }
        
    }
    cout<<t;

    return 0;
}