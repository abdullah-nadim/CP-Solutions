#include <iostream>
using namespace std;

int main() {
	int test,x;
	cin>>test;
	
    while(test--)
	{
	    cin>>x;
	    if(x<51)
	    {
	        cout<<"Left"<<"\n";
	    }
	    else
	    {
	        cout<<"Right"<<"\n";
	    }
	}
	return 0;
}
