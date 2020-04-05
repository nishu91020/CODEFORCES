#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,j,flag=0;
    cin>>k;
    int arr[12];
    for(int i=0;i<12;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12);
    /*for(int i=0;i<12;i++)
    {
        cout<<arr[i];
    }*/
    if(k==0)
        cout<<"0";
    else
    {int sum=arr[11];
    for( j=10;j>=0;j--)
    {
        if(sum<k)
            sum+=arr[j];
        else
        {flag=1;
            break;}
    }
    if(flag==0 && sum<k)
        cout<<"-1";
    else
    cout<<12-j-1;}
    return 0;
}
