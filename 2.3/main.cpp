#include <iostream>
#include <memory.h>
using namespace std;
void print();
struct nod
{
    int data;
    struct nod *next;
}*start,*p1,*p2,*newnode;
typedef struct nod node;
int main()
{
    int n,k;
    start=NULL;
    cout<<"Enter the number of elements you want to enter ";
    cin>>n;

   for(int i=0;i<n;i++)
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
  cout<<"Enter the element to be deleted";
  cin>>k;
//DELETING THE ELEMENT
p1=start;
p2=start;
    while(p1->data!=k)
    {
        p1=p1->next;
    }
    p2=p1->next;
    p1->data=p2->data;
    p1->next=p2->next;
    delete(p2);
    print();
return 0;
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
