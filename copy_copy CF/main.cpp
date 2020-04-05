#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
        int t,x;
        cin>>t;
        for(int i=0;i<t;i++)
        {   int n,temp,sum=0;
            vector<int>arr;
            cin>>n;
            for(int j=0;j<n;j++)
                {
                        cin>>x;
                        arr.push_back(x);
                }
            sort(arr.begin(), arr.end());
            temp=arr[0];
            for(int j=1;j<n;j++)
            {
                if(arr[j]==temp)
                    arr[j]=0;
                else
                    temp=arr[j];
            }
            for(int j=0;j<n;j++)
            {
                if(arr[j]==0)
                    sum+=1;
            }
                cout<<n-sum<<"\n";
        }

        return 0;
}


