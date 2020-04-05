#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,temp;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
            {
                v.push_back(i+1);
            }
           /* for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }*/

    if(n%2!=0)
        cout<<"-1";
    else
        {

            for(int i=0;i<n-1;i++)
            {
                temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
                i++;
            }
            for(int j=0;j<n;j++)
                cout<<v[j]<<" ";
        }

    return 0;
}
