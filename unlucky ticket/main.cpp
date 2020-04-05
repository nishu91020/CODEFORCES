#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,x=0,y=0;
    cin>>n;
    int v[2*n];
    char c;
    for(int i=0;i<(2*n);i++)
    {
        cin>>c;
        v[i]=c-48;

    }
    sort(v,v+n);
    sort(v+n,v+(2*n));
    for(int i=0;i<n;i++)
    {
        if(v[i]>v[n+i])
            y++;
        else if(v[i]<v[n+i])
            x++;
    }
    if(y==n || x==n)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
