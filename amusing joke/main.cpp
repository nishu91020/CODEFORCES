#include <iostream>

using namespace std;

int main()
{
    string host,guest,pile;
    int f1=0,f2=0,f3=0;
    cin>>host;
    cin>>guest;
    cin>>pile;
    int h=host.length();
    int g=guest.length();
    int p=pile.length();
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<g;j++)
        {
            if(pile[i]==guest[j] && pile[i]!='#' && guest[j]!='#')
            {
                pile[i]='#';
                guest[j]='#';
            }
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<h;j++)
        {
            if(pile[i]==host[j] && pile[i]!='#' && host[j]!='#')
            {
                pile[i]='#';
                host[j]='#';
            }
        }
    }
    for (int i=0;i<p;i++)
    {
        if(pile[i]!='#')
            f1=1;
    }
    for (int i=0;i<h;i++)
    {
        if(host[i]!='#')
            f2=1;
    }
    for (int i=0;i<g;i++)
    {
        if(guest[i]!='#')
            f3=1;
    }
    if(f1==0 && f2==0 && f3==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
