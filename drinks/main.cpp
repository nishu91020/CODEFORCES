#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long double n;
    int x;
    long double sum=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
    }
    long double y=sum/n;
    cout<<y;
    return 0;
}
