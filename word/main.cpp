#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int u=0,low=0;
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
            u++;
        else if(islower(s[i]))
            low++;
    }
    if(u>low)
        for(int i=0;i<l;i++)
        {
            if(islower(s[i]))
               s[i]=toupper(s[i]);
        }

    else
        for(int i=0;i<l;i++)
        {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
        }
    cout<<s;
    return 0;
}
