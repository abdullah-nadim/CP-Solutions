#include <iostream>
using namespace std;

int main() {
	int t,k,x;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>k>>x;
	    k=(k*7)-x;
	    cout<<k<<endl;
	}
	return 0;
}
