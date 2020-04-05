#include <iostream>

using namespace std;

int main()
{
    int s[4],c=0;
    for(int i=0;i<4;i++)
        cin>>s[i];
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(s[i]==s[j] && s[i]>0 && s[j]>0)
            {
                c++;
                s[j]=0;
            }
        }
    }
    cout<<c;
    return 0;
}
