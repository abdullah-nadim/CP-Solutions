#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    y*=10;
	    x*=100;
	    if(x<y)
	         cout<<"Disposable\n";
	    else
	         cout<<"Cloth\n";
	    
	}
	return 0;
}
