#include <iostream>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    if((a+b)%2==0)
	    {
	        cout<<"Bob\n";
	    }
	    else
	    {
	        cout<<"Alice\n";
	    }
	}
	return 0;
}
