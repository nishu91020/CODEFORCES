#include <iostream>

using namespace std;

int main()
{
    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    int temp=d;
    while(temp>0)
    {
        if( temp%k==0 || temp%l==0 || temp%m==0 || temp%n==0)
            c++;
        temp--;

    }
    cout<<c;

    return 0;
}
