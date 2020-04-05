#include <iostream>
#include<string>
using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;

    int l1=x.length();
    for(int i=0;i<l1;i++)
    {
        if(x[i]!=y[i])
            cout<<"1";
        else
            cout<<"0";
    }
    return 0;
}
