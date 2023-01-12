#include <iostream>
using namespace std;

int main() {
	int n,p1[10000],p2[10000],op1=0,op2=0,hp=0,win=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>p1[i];
	    cin>>p2[i];
	    op1+=p1[i];
	    op2+=p2[i];
	    if((op1-op2)>hp)
	    {
	        hp = op1-op2;
            win = 1;	  
	    }
	    if((op2-op1)>hp)
	    {
	        hp = op2-op1;
	        win =2;
	    }
	    
	}
	  cout<<win<<"\t"<<hp;
	
	return 0;
}
