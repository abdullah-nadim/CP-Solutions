#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,k;
	    cin>>n>>m>>k;
	    if(n+k<=m)
	    {
	        cout<<"YES\n";
	    }
	    else 
	        cout<<"NO\n";
	}
	return 0;
}
