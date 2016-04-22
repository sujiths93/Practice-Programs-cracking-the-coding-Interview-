#include <iostream>

using namespace std;

struct nod
{
    int data;
    struct nod *next;
}*newnode,*s1,*s2,*c1,*c2,*s,*s3,*res;
typedef struct nod node;

node *createlist(int [],int);
int main()
{
    s1=NULL;
    s=NULL;
    int sum;
    int x;
    s2=NULL;
    cout<<"Enter the first number";
    cin>>x;
    //To extract digits in the number
    int digit[10];
    int i=0;
    while(x>0)
    {
      ++i;
      digit[i]=x%10;
      x=x/10;

    }
    //returning the list for the first number
    s1=createlist(digit,i);

    i=0;
    cout<<"Enter the second number";
    cin>>x;
    while(x>0)
    {
      ++i;
      digit[i]=x%10;
      x=x/10;
    }
    //returning the list for the second number
    s2=createlist(digit,i);


    //adding the two numbers
s3=NULL;
c1=s1;
c2=s2;
  res=s3;

int carry=0;
    while(i>0)
    {
        newnode=new node;
        newnode->next=NULL;

        sum=c1->data+c2->data+carry;
        if(i!=1)
        {
            if(sum>9)
          {
            carry=sum/10;
            newnode->data=sum%10;
            if(s3==NULL)
            {
                s3=newnode;


            }
            else
            {
                res=s3;
                while(res->next!=NULL)
                    res=res->next;
                res->next=newnode;
            }
            c1=c1->next;
            c2=c2->next;

          }

            else
          {
            newnode->data=sum;
             if(s3==NULL)
            {
                s3=newnode;
            }
            else
            {
                while(res->next!=NULL)
                    res=res->next;
                res->next=newnode;

            }
            c1=c1->next;
            c2=c2->next;

          }

    }
    else
    {
        while(res->next!=NULL)
        {
            res=res->next;
        }
        newnode->data=sum;
        res->next=newnode;

    }
        --i;


 }

 res=s3;
 while(res!=NULL)
 {

     cout<<res->data<<" ";
     res=res->next;
 }

        return 0;
}
node * createlist(int digit[],int n)
{
    s=NULL;
    c1=s;
    for(int i=1;i<=n;i++)
    {
        newnode=new node;
        newnode->next=NULL;
        newnode->data=digit[i];
        if(s==NULL)
        {
            s=newnode;
        }
        else
        {
             c1=s;
            while(c1->next!=NULL)
            {
            c1=c1->next;
            }
            c1->next=newnode;

        }
    }
    return s;
}
