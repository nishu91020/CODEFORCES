#include <iostream>

using namespace std;

int main()
{
    int n,c1=0,c2=0;
    cin>>n;
    string s[n],m;
    for(int i=0;i<n;i++)
        cin>>s[i];
        if(n==1)
            cout<<s[0];
        else
        {
            string k=s[0];
            for(int i=0;i<n;i++)
            {
                if(s[i]!=k)
                    m=s[i];
            }
             for(int i=0;i<n;i++)
            {
                if(k==s[i])
                    c1++;
                else
                    c2++;
            }
            if(c1>c2)
                cout<<k;
            else if(c2>c1)
                cout<<m;
        }
    return 0;
}
