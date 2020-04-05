#include <iostream>

using namespace std;

int main()
{
    string s;
    int flag=0,i;
    cin>>s;
    int l=s.length();
    for( i=0;i<=l-7;i++)
    {
        if(s.substr(i,7)=="1111111" || s.substr(i,7)=="0000000")
           {cout<<"YES";
           flag=1;
           break;}
    }
    if(flag==0)
        cout<<"NO";
    return 0;
}
