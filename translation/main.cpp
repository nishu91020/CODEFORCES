#include <iostream>

using namespace std;

int main()
{
    string s,c;
    cin>>s>>c;
    int l=s.length();
    int flag=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]!=c[l-1-i])
        {
           flag=1;
           break;
        }
    }
    if(flag==1)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
