
#include<bits/stdc++.h>
using namespace std;

int main()
{   int a[4],sum=0;
    string str;
    for(int i=0;i<4;i++)
        cin>>a[i];
    cin>>str;
    int l=str.length();
    for(int i=0;i<l;i++)
    {
        sum+=a[(str[i]-'0')-1];

    }
    cout<<sum;


    return 0;
}

