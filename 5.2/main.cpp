#include <iostream>

using namespace std;
int arr[10][10];
void dgraph()
{
int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    cout<<"Enter the paths of the graph"<<endl;
    for(int i=0;i<n;i++)
    {
            cout<<"Enter the path for graph"<<i<<endl;
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
    }

for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
    cout<<arr[i][j]<<" "<<endl;
}



int main()
{
    dgraph();
    return 0;
}
