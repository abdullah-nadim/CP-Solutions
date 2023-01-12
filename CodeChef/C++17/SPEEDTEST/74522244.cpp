#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float a,x,b,y;
	    float as,bs;
	    cin>>a>>x>>b>>y;
	    as = a/x;
	    bs = b/y;
	    if(as>bs)
	    {
	        cout<<"Alice"<<"\n";
	    }
	    if(as==bs)
	    {
	        cout<<"Equal"<<"\n";
	    }
	    if (as<bs)
	    {
	        cout<<"Bob"<<"\n";
	    }
	    
	}
	return 0;
}
