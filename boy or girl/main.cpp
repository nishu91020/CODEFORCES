#include <iostream>

using namespace std;

int main()
{   string s;
    int arr[26]={0},c=0;
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(arr[s[i]-97]==0)
            {c++;
            arr[s[i]-97]+=1;}
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!"<<"\n";
    else
        cout<<"IGNORE HIM!"<<"\n";
    return 0;
}
