#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='y'|| s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y')
        {
            s.erase(i,1);
            l-=1;
            i-=1;

        }
    }
    int l1=s.length();
    for(int i=0;i<l1;i++)
    {   if(isupper(s[i]))
            s[i]=tolower(s[i]);
        cout<<"."<<s[i];}
    return 0;
}
