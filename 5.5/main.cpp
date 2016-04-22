#include <iostream>
#include <sstream>
#include <strings.h>
using namespace std;
string dtobin(int n)
{
    ostringstream oss;
    string st="";
    if(n<0)
    {
        cout<<"Number is negative";
        return st;
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
    cout<<st<<endl;
return st;

}
int bitflip(int n1,int n2)
{
    int xn=n1^n2;
    string s=dtobin(xn);
    int count=0;
    //cout<<s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='1')
            count++;
    }
    return count;
}
int main()
{
    int n1=100000;
    int n2=101;

    int c=bitflip(n1,n2);
    cout<<c;


    return 0;
}
