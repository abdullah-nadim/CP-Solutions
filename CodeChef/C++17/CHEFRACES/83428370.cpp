#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y,g=0;
	    cin>>x>>y>>a>>b;
	    if((x!=a && x!=b))
	    {
	        g++;
	    }
	    if(y!=a && y!=b)
	    {
	        g++;
	    }	
	    cout<<g<<endl;
	}
	return 0;
}
