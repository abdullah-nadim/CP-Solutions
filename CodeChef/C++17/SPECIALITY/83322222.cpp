#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(y>x && y>z)
	         cout<<"Tester\n";
	    else if (x>y && x>z)
	         cout<<"Setter\n";
	    else if (z>y && z>y)
	        cout<<"Editorialist\n";
	}
	return 0;
}
