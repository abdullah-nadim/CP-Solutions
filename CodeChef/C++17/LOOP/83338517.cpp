#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,m,ab,bm;
	    cin>>a>>b>>m;
	    ab=abs(a-b);
        bm=min(m-a,a)+min(m-b,b);
    	cout<<min(ab,bm)<<endl;
	}
	return 0;
}
