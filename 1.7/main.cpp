#include <iostream>

using namespace std;

int main()
{
    int n;
    int arr[10][10];
    int ar[10][10];
    cout<<"ENTER AN N*N MATRIX";
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        cin>>arr[i][j];
        ar[i][j]=arr[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==0)
            {
                    for(int l=0;l<n;l++)
                    {
                        ar[i][l]=0;
                        ar[l][j]=0;
                    }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cout<<ar[i][j];
        cout<<endl;
    }
    return 0;
}
