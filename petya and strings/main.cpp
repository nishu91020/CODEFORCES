#include <iostream>

using namespace std;

int main()
{   string s1,s2;
    int flag=0;
    cin>>s1;
    cin>>s2;
    int l1=s1.length();
    for(int i=0;i<l1;i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    for(int i=0;i<l1;i++)
    {
        if(s1[i]>s2[i])
        {
            flag=1;
            break;
        }
        else if(s1[i]<s2[i])
        {
            flag=-1;
            break;
        }
    }
    cout<<flag;
    return 0;
}
