#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int sum,w,x,y,z,a,b;
        cin>>w>>x>>y>>z;
        a=x-y;
        b=a*z;
        sum = w+ b;
        cout<<sum<<"\n";
    }
    
	return 0;
}
