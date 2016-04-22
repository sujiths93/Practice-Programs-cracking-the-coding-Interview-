#include <iostream>

using namespace std;
struct nod
{
    int data;
    struct nod *next;
}*newnode,*s1,*c1,*c2,*s,*s2;
typedef struct nod node;
node *createlist(int [],int);
int main()
{

    s1=NULL;
    s=NULL;
    int x;
    s2=NULL;
    cout<<"Enter the number";
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

    s1=createlist(digit,i);

   //To traverse till the middle of the list
   int j=1;
   c1=s1;
   while(j<=i/2)
   {
        c1=c1->next;
        j++;
   }

   c1=c1->next;
   //To enter elements starting previously extracted into a new list.
   while(c1!=NULL)
   {

       newnode=new node;
       newnode->data=c1->data;
       if(s2==NULL)
       {
           s2=newnode;
           s2->next=NULL;

       }
       else
       {
           newnode->next=s2;
           s2=newnode;
       }
       c1=c1->next;
   }
   c2=s2;
   c1=s1;
   int flag=0;
   while(c2!=NULL)
   {
        if(c2->data==c1->data)
        {
            c2=c2->next;
            c1=c1->next;
        }
        else
        {
            flag=1;
            break;
        }

   }
   if(flag)
   cout<<"NOT A PALINDROME";
   else
   cout<<"ITS A PALINDROME";


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
