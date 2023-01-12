#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int x,y,a,b,out;
	    cin>>x>>y;
	    a = ((x-1)/10)+1;
	    b= ((y-1)/10)+1;
	    out=b-a;
	    if(out<0)
	    {
	        out*=(-1);
	        cout<<out<<"\n";
	    }
	    else{
	    cout<<out<<"\n";
	    }
	}
	return 0;
}
