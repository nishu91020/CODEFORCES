#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,flag=0;
    cin>>s>>n;
    int x[n],y[n];
    vector<pair<int,int> >dr;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
     for(int i=0;i<n;i++)
    {
        dr.push_back(make_pair(x[i],y[i]));
    }
    sort(dr.begin(),dr.end());
    if(dr[0].first>=s)
        cout<<"NO";
    else
      {
          for(int i=0;i<n-1;i++)
          {

              s=s+dr[i].second;
              if(s<=dr[i+1].first)
                {flag=1;
                break;}
          }

          if(flag==1)
            cout<<"NO";
        else
            cout<<"YES";
    }
    return 0;
}
