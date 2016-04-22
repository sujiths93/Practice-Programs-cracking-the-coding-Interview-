#include <iostream>
#include <string>
#include <sstream>

using namespace std;
void dtobin(int n)
{
    ostringstream oss;
    string st="";
    if(n<0)
    {
        cout<<"Number is negative";
        return;
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
cout<<endl<<st;

}


//void fiveptone(int n,int i,int j,int m)
//{

   // int x=n&(1<<i);
    //cout<<x<<endl;
    //dtobin(x);
//}
int main()
{
  int n=1<<10;
  int m=19;
  int i=2;
  int j=6;

  dtobin(n);
  dtobin(m);

   int ones=1;
   dtobin(ones);

   //left shift by j+1
   int    left=ones<<(j+1);
   dtobin(left);
   //left shift by i-1
    int right=~(ones<<i);

    int mask=left|right;

    int n_cleared=n&mask;
    int m_shifted=m<<i;

    int res=n_cleared|m_shifted;
    dtobin(res);


    return 0;
}
