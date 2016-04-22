#include <iostream>

using namespace std;

int arr[20];
int mini[20];
int ret=0;
int top=-1;
int top1=-1;

void push(int);
int pop();
int min();
int main()
{
    int p=0;
	int m;
	int a,n;
	cout<<"Enter the number of elements you want to enter";
	cin>>n;
	cout<<"Enter the elements";

    for(int i=0;i<n;i++)
	{
		cin>>a;
		push(a);
	}

    cout<<"\nPrinting the elements ";

    for(int i=0;i<=top;i++)
	{
		cout<<arr[i]<<endl;
	}

	 p=pop();
	 p=pop();
	 m=min();

	 cout<<endl<<m;

cout<<"CONTENT OF THE STACK";

for(int i=0;i<=top;i++)
{
	cout<<arr[i];
}
cout<<"CONTENTS OF THE MIN STACK";
for(int i=0;i<=top1;i++)
{
	cout<<arr[i];
}
	return 0;
}
void push(int a)
{
        if(top==-1)
        {
            arr[top++]=a;
            mini[top1++]=a;
        }
        else
        {
            arr[top++]=a;
            if(a<mini[top1])
            {

                mini[top1++]=a;
            }

            else
            {
                mini[top1++]=mini[top1];
            }

        }
}
int pop()
{
	--top1;
	ret=top--;
	return ret;
}
int min()
{
	ret=mini[top1];
	return ret;
}
