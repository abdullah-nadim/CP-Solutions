#include <iostream>
using namespace std;

int main() {
    int T,i,N,N1,N2,N3,N4,max;
    cin>>T;
	for(i=0;i<T;i++)
	{
	   cin>>N;
	   cin>>N1>>N2>>N3>>N4;
	   max=N1;
	   if(N4>max)
	   {
	       max=N4;
	   }
	   if (N2>max)
	   {
	       max=N2;
	   }
	   if (N3>max)
	   {
	       max=N3;
	   }
	    std::cout << max << std::endl;
	}
	return 0;
}
