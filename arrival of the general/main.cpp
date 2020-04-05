#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,ans,x,y;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int ma=v[0];
    for(int i=1;i<n;i++)
    {
        if(v[i]>ma)
            ma=v[i];
    }
    int mi=v[0];
    for(int j=1;j<n;j++)
    {
        if(v[j]<mi)
            mi=v[j];
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==ma)
        {
           x=i ;
           break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(v[i]==mi)
        {
            y=i;
            break;
        }
    }

        if(x>y)
            ans=x+n-y-2;
        else
            ans=x+n-y-1;
        cout<<ans;
    return 0;
}
