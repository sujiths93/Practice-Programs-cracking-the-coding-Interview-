#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int main()
{
    int i=0;
    int space=0;
    int count=0;
    char str[]="Mr John Smith   ";
    //To count the number of words in a string
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            if(str[i+1]==' ')
            break;
        if(str[i]==' ')
        {
            space++;
        }
    }
    cout<<i<<endl;
    int newlen=i+(space*2);
    str[newlen]='\0';
    cout<<str[i]<<endl;
    for(int j=i-1;j>=0;j--)
    {
        if(str[j]==' ')
        {
            str[newlen-1]='0';
            str[newlen-2]='2';
            str[newlen-3]='%';
            newlen=newlen-3;
        }
        else if(str[j]!=' ')
        {
            str[newlen-1]=str[j];
            newlen=newlen-1;
        }
    }

cout<<str;
    return 0;
}

