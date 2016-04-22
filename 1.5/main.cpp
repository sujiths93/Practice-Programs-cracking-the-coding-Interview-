#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    char str[]="aAbcccccaaa";

    int c=0;
    int i=0;

    int count[26];
    for(int i=0;i<26;i++)
    {
        count[i]=0;
    }
    while(str[i])
    {
        str[i]=tolower(str[i]);
        i++;
    }
    char str1[i];
    int len=i;
//To find the occurence of each character.
int      k=0;
     count[k]=1;
    for(int j=0;j<i-1;j++)
    {

        if(str[j]==str[j+1])
        {
            count[k]++;
        }
        else
            count[++k]+=1;
    }

    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            c++;
        }
    }
    //counting the number of characters required to store the string
    c=c*2;

if(c==len)
{
    cout<<str;
    return 0;
}

//To insert characters into the string
str1[c]='\0';

int j=0;
i=0;
k=0;
while(i<c-1)
{
    str1[i]=str[k];
    str1[i+1]='0'+count[j];

    k=k+count[j];

    j=j+1;
    i=i+2;
}

cout<<str1;
    return 0;
}
