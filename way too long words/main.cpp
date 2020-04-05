#include <iostream>

using namespace std;

int main()
{
    string s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s;
        int l=s.length();
        if(l>10)
            cout<<s[0]<<l-2<<s[l-1]<<"\n";
        else
            cout<<s<<"\n";
    }
    return 0;
}
