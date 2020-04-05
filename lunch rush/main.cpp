#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k,x,y,z;
    vector<int>f;
    vector<int>t;
    vector<int>joy;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        f.push_back(x);
        t.push_back(y);
    }
    for(int i=0; i<n ;i++)
    {
        if(t[i]>k)
        {
            z=f[i]-(t[i]-k);
            joy.push_back(z);
        }
        else
           {
               z=f[i];
               joy.push_back(z);
           }
    }
    int m=joy[0];
       for(int i=1; i<n ;i++)
    {
        if(joy[i]>m)
            m=joy[i];
    }
    cout<<m;
    return 0;
}
