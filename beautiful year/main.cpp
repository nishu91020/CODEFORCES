#include <iostream>

using namespace std;

int main()
{   int yr,flag=0,r;
    cin>>yr;
    int temp=yr+1;
    while(flag==0)
    {   int arr[10]={0},c=0;
        int y=temp;
        while(y>0)
        {
            r=y%10;
            arr[r]+=1;
            y=y/10;
        }
        for(int i=0;i<10;i++)
        {
            if(arr[i]==0 || arr[i]==1)
                c++;
        }
        if(c==10)
        {
            cout<<temp;
            flag=1;
        }
        temp++;
    }
    return 0;
}
