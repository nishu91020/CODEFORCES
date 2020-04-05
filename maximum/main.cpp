#include <iostream>
#include<vector>
using namespace std;

int main()
{   int n,x,sum=0;
    vector<int>b;
    cin>>n;
    for(int i=0;i<n;i++)
       {
         cin>>x;
         b.push_back(x);

       }
       for(int i=0;i<n;i++)
       {
           if(b[i]>0)
            {
                sum+=b[i];
                cout<<sum<<" ";
            }
            else
                cout<<sum+b[i]<<" ";
       }

    return 0;
}
