#include <iostream>

using namespace std;

int main()
{
    int T,N,Y, un;
    cin>>T;
    for(int i =0; i<T;++i)
    {
        cin>>N;
        int Z = 0;
        for(int j=0;j<N;++j)
        {
            
            cin>>Y;
            if(Y>999)
            {
                ++Z;
            }
        }
        cout<<Z<<endl;
    }
    return 0;
}
