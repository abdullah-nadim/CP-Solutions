#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int pa,pb,pc;
	    cin>>pa>>pb>>pc;
	    if((pa+pc)<pb)
	        cout<<pb<<endl;
	    else
	        cout<<pa+pc<<endl;
	}
	return 0;
}
