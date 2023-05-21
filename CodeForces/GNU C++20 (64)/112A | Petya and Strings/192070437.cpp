#include<bits/stdc++.h>
using namespace std;
void toLower(string &output1)
{
   transform(output1.begin(),output1.end(),output1.begin(), ::tolower);
    //cout<<output1;
}
int main()
{
    string first,second;
    cin>>first>>second;
    toLower(first);
    toLower(second);
    //cout<<
    if(first<second)
    {
        cout<<-1;
    }
    else if(first>second)
    {
        cout<<1;
    }
    else
        cout<<0;
}