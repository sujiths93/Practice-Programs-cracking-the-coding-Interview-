#include <iostream>
#include <string.h>
#include <iterator>
using namespace std;

void swap(char str[],int j)
{
    char temp;
    temp=str[j];
    str[j]=str[j+1];
    str[j+1]=temp;
}
int main()
{
    char str[20];
    cout <<"Enter the string";
    cin>>str;
    char str1[20];
    std::copy(str, str, str1);
    int l=strlen(str)-1;
    int len=l;
    int j=0;
    int count=0;
    for(int i=0;i<=l;i++)
    {
        j=0;
        while(j<len)
        {
            swap(str,j);
            cout<<str<<endl;
            ++count;
            j++;
        }
    }
cout<<count;
    return 0;
}
