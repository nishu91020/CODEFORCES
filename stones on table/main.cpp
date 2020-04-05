#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,c=0,sum=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {

            if(s[i]==s[j])
                {
                    s.erase(j,1);
                    c++;
                    n--;
                    j--;
                }
                else
                    break;

        }
    }
        cout<<c;
    return 0;
}
