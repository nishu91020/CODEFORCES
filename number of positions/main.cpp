#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    if((a+b)==n)
        cout<<b;
    else if((a+b)<n)
        {
            cout<<b+1;
        }
    else
        cout<<n-a;
    return 0;
}
