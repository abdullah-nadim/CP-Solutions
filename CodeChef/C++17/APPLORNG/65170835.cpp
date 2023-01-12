#include <iostream>
using namespace std;

int main() {
	int X,A,B,S;
	cin>>X>>A>>B;
	S= A+B;
	if(S<=X)
	{
	    std::cout << "Yes" << std::endl;
	}
	else
	{
	    std::cout << "No" << std::endl;
	}
	return 0;
}
