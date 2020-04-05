#include <iostream>

using namespace std;
//executing in ideone
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    int sum[n]={0},ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[i]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(sum[i]>=2)
            ans++;
    }
    cout<<ans;
    return 0;
}
