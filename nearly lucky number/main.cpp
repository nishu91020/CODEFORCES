#include <iostream>

using namespace std;

int main()
{
    string n;
    int c=0;
    cin>>n;
    int l=n.length();
    for(int i=0;i<l;i++)
        if(n[i]=='4' || n[i]=='7')
            c++;
        if(c==4 || c==7)
            cout<<"YES";
        else
            cout<<"NO";
    return 0;
}
