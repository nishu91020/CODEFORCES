#include <iostream>

using namespace std;

int main()
{   int n;
     int sum[3]={0};
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i]+=arr[j][i];
        }
    }

    if(sum[0]==0 && sum[1]==0 && sum[2]==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
