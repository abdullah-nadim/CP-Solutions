#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        float m;
        cin>>n>>x;
        m=n*x;
        float p =m/4;
        int in=m/4;
        if(p/1==in)
        {
            cout<<p<<"\n";
            
        }
        else
        {
            cout<<in+1<<"\n";
        }
    }
	return 0;
}
