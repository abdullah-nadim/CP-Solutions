 #include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int s=0;
    string st;
    cin>>st;
    int sz = st.size();
    for(int i=0;i<sz;i++)
    {
        for(int j=0;j<sz;j++)
        {
            if(st[j]==st[i] && j!=i && st[j]!=0)
            {
                s++;
                st[j]=0;
            }
        }
    }
    sz-=s;
    if(sz%2!=0)
    {
        cout<<"IGNORE HIM!\n";
    }
    else
    {
        cout<<"CHAT WITH HER!\n";
    }
 
}