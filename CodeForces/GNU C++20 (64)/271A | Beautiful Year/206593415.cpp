#include<bits/stdc++.h>
using namespace std;
 
bool distinct(int a,int b, int c, int d)
{
    if(a==b)
        return false;
    if(a==c)
        return false;
    if(a==d)
        return false;
    if(b==c)
        return false;
    if(c==d)
        return false;
    if(b==d)
        return false;
    return true;
}
int main()
{
    int year;
    cin>>year;
    while(year)
    {
        year++;
        int yr = year;
        int a,b,c,d;
        a = yr%10;
        yr = yr/10;
        b = yr%10;
        yr = yr/10;
        c = yr%10;
        yr = yr/10;
        d=yr%10;
        if(distinct(a,b,c,d))
            {
                cout<<year<<endl;
                break;
            }
    }
}