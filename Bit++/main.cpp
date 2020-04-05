#include <iostream>

using namespace std;

int main()
{
    int n,x=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s[0]=='+')
            ++x;
        else if(s[2]=='+')
            x++;
        else if(s[0]=='-')
            --x;
        else if(s[2]=='-')
            x--;
    }
    cout<<x;
    return 0;
}
