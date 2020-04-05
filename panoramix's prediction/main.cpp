#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int flag=0;
    int temp=n+1;
    while(flag==0)
    {
            int c=0;
        for(int j=2;j<temp;j++)
        {
            if(temp%j==0)
                c++;
        }
        if(c==0)
            flag=1;
       temp++;
    }
    if((temp-1)==m)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
