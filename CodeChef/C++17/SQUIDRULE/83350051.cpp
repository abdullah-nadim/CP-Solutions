#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        s+=arr[i];
	    }
	    sort(arr,arr+n);
	    s-=arr[0];
	    cout<<s<<endl;
	}
	return 0;
}
