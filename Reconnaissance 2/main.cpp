#include <iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cstdlib>
using namespace std;
int  mi= 1e7;
int main()
{   int n,flag=0;
    cin>>n;
    int arr[],x;

    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        cout<<arr[i];
    for(int i=0;i<n-1;i++)
    {   x=abs(arr[i]-arr[i+1])
        if(mi>x)
        mi=x;

    }
    x=abs(arr[n-1]-arr[0])
    if(mi>x)
        mi=x;
    for(int i=0;i<n;i++)
    {

            if(abs(arr[i]-arr[i+1])==mi)
            {cout<<i<<" "<<i+1;
                flag=1;
            break;}

    }
    if(flag==0)
        cout<<n<<" "<<1;
    return 0;
}
