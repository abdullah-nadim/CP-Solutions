#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int pa,pb,qa,qb;
	    cin>>pa>>pb>>qa>>qb;
	    if(max(pa,pb)>max(qa,qb))
	        cout<<"Q\n";
	    else if(max(pa,pb)<max(qa,qb))
	        cout<<"P\n";
	    else if(max(pa,pb)==max(qa,qb))
	        cout<<"TIE\n";
	}
	return 0;
}
