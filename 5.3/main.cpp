#include <iostream>
#include <sstream>
using namespace std;
string dtobin(int n)
{
    ostringstream oss;
    string st="";
    if(n<0)
    {
        cout<<"Number is negative";
        return 0;
    }
    int r;
    while(n!=1)
    {

        r=n%2;
        oss<<st<<r;
        n/=2;
    }
    oss<<st<<1;
    st=oss.str();
    //cout<<st;
//To reverse the string
int len=st.length();
    int j=len-1;
    char x;
    for(int i=0;i<=len/2-1;i++)
    {
        x=st[i];
        st[i]=st[j];
        st[j]=x;
        j--;
    }
//cout<<endl<<st;
return st;
}


void counting(int n)
{
    string st=dtobin(n);
    int len=st.length();
    int count=0;
    for(int i=0;i<len;i++)
    {

        if(st[i]=='1')
        {
            count++;
        }
    }
int     cn=count;
    //To Find the largest number
//cout<<"Number of 1s in number num"<<cn;
    string st1;
    for(int j=n+1;;j++)
    {
         st1=dtobin(j);
        count=0;
        for(int i=0;i<=len;i++)
       {
            if(st1[i]=='1')
           {
               count++;
           }
       }
     //  cout<<"Number of 1s in number num"<<count;
       if(count==cn)
       {
           cout<<"\nThe next largest number is "<<j<<endl;
           break;
       }
    }


    //To find the smallest
    for(int k=n-1;;k--)
    {
         count=0;
         st1=dtobin(k);
         for(int i=0;i<len;i++)
       {
            if(st1[i]=='1')
           {
               count++;
           }
       }
         if(count==cn)
       {
           cout<<"The smallest number is "<<k;
           break;
       }
    }

}
int main()
{
    int num;
cout<<"Enter the number";
cin>>num;
counting(num);

    return 0;
}
