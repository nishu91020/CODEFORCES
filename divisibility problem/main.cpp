#include <iostream>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a<b)
            cout<<b-a<<"\n";
        else if(a%b!=0)
            {int x=a/b;
             int ans=((x+1)*b)-a;
            cout<<ans<<"\n";}
         else
            cout<<"0"<<"\n";



    }
    return 0;
}
