#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,s;
	    bool flag = true;
	    cin>>a;
	    cin>>b;
	    s= a+b;
	   //int n= sqrt(s);
	   for (int i=2;i<s;i++)
	   {
	       if(s%i==0)
	       {
	           flag = false;
	       }
	   }
	   if(flag== true)
	   {
	       cout<<"ALICE\n";
	   }
	   else
	   {
	       cout<<"BOB\n";
	   }
	    
	}
	return 0;
}
