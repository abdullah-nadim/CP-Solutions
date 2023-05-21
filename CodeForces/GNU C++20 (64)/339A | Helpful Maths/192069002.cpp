#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int sz = s.size();
    for(int j=0;j<=sz-2;j+=2)
    {
        for(int k=j+2;k<sz;k+=2)
        {
            if(s[k]<s[j])
            {
                swap(s[k],s[j]);
            }
        }
    }
    cout<<s;
}