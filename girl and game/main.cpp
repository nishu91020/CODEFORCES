#include <iostream>
#include<string.h>
using namespace std;

int main()
{   string s;
    int arr[26]={0},sum=0;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        arr[s[i]-97]+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]%2!=0)
            sum+=arr[i];
    }
    if(sum%2!=0 || sum==0)
        cout<<"First"<<"\n";
    else
        cout<<"Second"<<"\n";
    return 0;
}
