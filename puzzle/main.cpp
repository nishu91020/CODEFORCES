#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{   int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    int mi=a[n-1]-a[0];
    for(int i=1;i<=m-n;i++)
    {
        int x=a[n+i-1]-a[i];
        if(x<mi)
            mi=x;

    }
    cout<<mi;
    return 0;
}
