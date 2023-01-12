#include <iostream>
using namespace std;

int main() {
	int t,p,q,a=0,b=0;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	   cin>>p>>q;
	   a=p+q;
	   b= a/2;
	   if(b%2==0)
	   {
	       cout<<"Alice"<<endl;
	   }
	   else
	   {
	       cout<<"Bob"<<endl;
	   }
	}
	return 0;
}
