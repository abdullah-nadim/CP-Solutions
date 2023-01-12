#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    if((n-x)<x)
	    {
	        cout<<n-x<<"\t";
	    }
	    else
	    {
	        cout<<x<<"\t";
	    }
	}
	return 0;
}
