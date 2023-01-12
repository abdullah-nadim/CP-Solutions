#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x%5==0)
        cout<<x/5;
    else
    {
        if((x%5)%4==0)
            cout<<(x%5)/4+x/5;
        else
        {
            if(((x%5)%4)%3==0)
                cout<<((x%5)%4)/3+(x%5)/4+x/5;
            else
            {
                if((((x%5)%4)%3)%2==0)
                    cout<<(((x%5)%4)%3)/2+((x%5)%4)/3+(x%5)/4+x/5;
                else
                    cout<<(((x%5)%4)%3)/2+((x%5)%4)/3+(x%5)/4+x/5+(((x%5)%4)%3)%2;
            }
        }
 
    }
}