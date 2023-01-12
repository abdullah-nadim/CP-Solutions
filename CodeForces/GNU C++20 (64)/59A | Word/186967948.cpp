#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int l=0,u=0;
    string cs;
    getline(cin,cs);
    int sz= cs.size();
    char us[sz];
    char ls[sz];
    for(int i=0;i<sz;i++)
    {
        if('a'<=cs[i]&&'z'>=cs[i])
        {
            us[i] = (cs[i]-'a')%26+'A';
            ls[i]=cs[i];
            l++;
 
        }
        else if('A'<=cs[i]&&'Z'>=cs[i])
        {
            ls[i] = (cs[i]-'A')%26+'a';
            us[i]  = cs[i];
            u++;
        }
    }
    if(u>l)
    {
        for(int i =0;i<sz;i++)
            cout<<us[i];
 
    }
    else
    {
        for(int i =0;i<sz;i++)
            cout<<ls[i];
 
    }
 
}
 