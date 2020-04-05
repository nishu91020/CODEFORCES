#include <iostream>
#include<math.h>
using namespace std;

int main()
{   int n,c=0;
    cin>>n;
        float m;
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            m=(i*i)+(j*j);
            int x=sqrt(m);
            //cout<<sqrt(m)-floor(sqrt(m))<<" ";
            if(sqrt(m)-floor(sqrt(m))==0 && x<=n )
                c++;
        }
    }
    cout<<c;
    return 0;
}
