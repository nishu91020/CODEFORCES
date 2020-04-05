#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length(),flag=0;
    for(int i=0;i<l;i++)
    {
        if(s.substr(i,3)=="WUB")
        {   if(flag==1 && i!=l-3)
               {

                    if(s[i-1]!=' ')
                        s[i]=' ';
                    s.erase(i+1,2);
                    l-=2;
                    flag=2;
               }

            else
            {s.erase(i,3);
            i-=1;
            l-=3;}

        }
            else
                flag=1;
        }

    cout<<s;
    return 0;
}
