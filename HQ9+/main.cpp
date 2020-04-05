#include <iostream>

using namespace std;

int main()
{   string s;
    int flag=0;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='H' || s[i]=='Q' ||s[i]=='9')
           {
               flag=1;
                break;
           }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
