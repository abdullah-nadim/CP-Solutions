#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,c,a,b;
	    cin>>x;
	    if(x%10==0)
	       cout<<x/10<<endl;
	   else if((x%10)%5==0)
	       cout<<(x/10)+(x%10)/5<<endl;
	   else if((x%10)%5!=0)
	       cout<<-1<<endl;
	}
	return 0;
}
