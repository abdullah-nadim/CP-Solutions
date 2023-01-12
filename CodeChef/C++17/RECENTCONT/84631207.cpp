#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, s=0,l=0;
	    cin>>n;
	    cin.ignore();
	    while(n--)
	    {
	       string word;
	       cin>>word;
	       if(word=="START38")
	       {
	           s++;
	       }
	       else if(word=="LTIME108")
	       {
	            l++;
	       }
	    }
	    cout<<s<<" "<<l <<endl;
	}
	return 0;
}
