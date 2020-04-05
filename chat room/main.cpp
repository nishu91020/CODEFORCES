#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,s1="hello";
    int x=0,c=0;
    cin>>s;
    int l=s.length();
    for(int i=0;i<5;i++)
      {
          for(int j=x;j<l;j++)
              {
                  if(s1[i]==s[j])
                  {
                     x=j;
                     s[j]='-';
                     break;
                  }
              }
      }
      cout<<s;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='-')
            c++;
    }
    if(c==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
