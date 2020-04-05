#include <iostream>

using namespace std;

int main()
{
    int arr[5][5],r=0,x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
            {
                cin>>arr[i][j];
            }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
                x=i-2;
                y=j-2;
                if(x<0)
                    x=-x;
                if(y<0)
                    y=-y;
                r+=x+y;
            }
        }
    }
    cout<<r;
    return 0;
}
