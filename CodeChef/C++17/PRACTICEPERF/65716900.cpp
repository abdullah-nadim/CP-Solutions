#include <iostream>
using namespace std;

int main() {
    int cc=0;
	for(int i=0;i<4;i++)
	{
	    int p;
	    cin>>p;
	    if(p>9)
	    {
	        cc++;
	    }
	    
	}
	std::cout << cc << std::endl;
	return 0;
}
