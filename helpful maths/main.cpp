#include <iostream>

using namespace std;

int main()
{ string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l-1;i++)
    {   for(int j=i+1;j<l;j++)
        {
            if(s[i]!='+' && s[j]!='+')
            {if((s[i]-48)>(s[j]-48))
                {int temp=s[i];
                s[i]=s[j];
                s[j]=temp;}
            }
    }
    }
    cout<<s;
    return 0;
}
