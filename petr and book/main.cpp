#include <iostream>

using namespace std;

int main()
{
    int n,arr[7];
    cin>>n;
    for(int i=0;i<7;i++)
        cin>>arr[i];
    int c=0,sum=0;
    while(sum<n)
    {
        sum+=arr[c%7];
        c++;
    }
    if(c%7==0)
        cout<<"7";
    else
        cout<<c%7;
    return 0;
}
