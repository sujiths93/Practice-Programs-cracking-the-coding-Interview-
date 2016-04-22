#include <iostream>

using namespace std;
void print();
void kth(int);
struct nod
{
    int data;
    struct nod *next;
}*start,*p1,*p2,*newnode;
typedef struct nod node;
int k;
int i;

int main()
{
    int n;
    start=NULL;


   cout<<"Enter the number of elements you want to enter ";
   cin>>n;
   cout<<"Enter the value of k";
   cin>>k;
   for(i=0;i<n;i++)
   {

    newnode=new node;
    cout<<"Enter the value of data"<<endl;
    cin>>newnode->data;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
    else
    {
        p1=start;
        while(p1->next!=NULL)
        {
            p1=p1->next;
        }
        p1->next=newnode;
    }
   }

   cout<<"\nPRINTING THE NODES"<<endl;
  print();
  kth(k);

    return 0;
}
void kth(int k)
{
    p1=start;
    p2=start;
    i=1;
    while(i<k)
    {
        p2=p2->next;
        i++;
    }
    cout<<"EXITED LOOP"<<endl;
    while(p2->next!=NULL)
    {
        p1=p1->next;
        p2=p2->next;
    }
cout<<k<<"th node from last is"<<p1->data;
}
void print()
{
    p1=start;
    while(p1!=NULL)
    {
        cout<<p1->data<<" ";
        p1=p1->next;
    }

}
