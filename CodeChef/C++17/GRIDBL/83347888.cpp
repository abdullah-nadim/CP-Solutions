#include <iostream>
using namespace std;

int main() {
        int t;
        cin>>t;
        while(t--)
        {
            int n,m;
            cin>>n>>m;
            if(n%2==0 && m%2==0)
                cout<<0<<endl;
            else if(n%2!=0 && m%2==0)
            {
                cout<<n%2*m<<endl;
            }
            else if(n%2==0 && m%2!=0)
            {
                cout<<m%2*n<<endl;
            }
            else if(n%2!=0 && m%2!=0)
            {
                cout<<(m%2*n)+(n%2*m)-1<<endl;
            }
        }
	return 0;
}
