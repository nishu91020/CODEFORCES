#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x,c=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
       {
           cin>>x;
            v.push_back(x);
        }
    for(int i=1;i<n;i++)
    {       int flag1=0,flag2=0;
        for(int j=i-1;j>=0;j--)
        {
            if(v[i]<v[j])
                flag1=1;
            else if(v[i]>v[j])
                flag2=1;
            else if(v[i]==v[j])
                  {flag1=1;
                    flag2=1;}
        }
       if(flag1==0 || flag2==0)
            c++;
    }

        cout<<c;
    return 0;
}
