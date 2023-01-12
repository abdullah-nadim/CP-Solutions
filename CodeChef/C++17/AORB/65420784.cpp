#include <iostream>
using namespace std;

int main()
{
    int T,X,Y;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int a=500,b=1000,c,d,e,f,g,h;
        cin>>X>>Y;
        c=a-(X*2);
        d=b-(X+Y)*4;
        e=c+d;
        f=b-(Y*4);
        g=a-(X+Y)*2;
        h=f+g;
        if(e>h){
           cout<<e<<endl; 
        }
        else {
            cout<<h<<endl;
        }
    }
	return 0;
}