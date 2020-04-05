#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    float x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int m;
    cin>>m;
    int b[m];
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int ma=INT_MIN;
    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {
             x=float(b[j])/a[i];
            if(x-floor(x)==0 && x>ma)
            {
                ma=x;
            }
        }
    }

    for(int j=0;j<m;j++)
    {
        for(int i=0;i<n;i++)
        {   float y=float(b[j])/a[i];
            if(y-floor(y)==0 && ma==y)
               {c++;}
        }
    }
    cout<<c;
    return 0;
}
