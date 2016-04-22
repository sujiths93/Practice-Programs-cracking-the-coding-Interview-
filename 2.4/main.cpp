#include <iostream>

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
    int n,x;
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
   cout<<"Enter the value of x";
   cin>>x;

   //traversing to the given node

   p1=start;
   while(p1->data!=x)
   {
       p1=p1->next;
   }
   p2=p1->next;

//Inserting elements greater than x

p3=start;

while(p3->data!=x)
{
    if((p3->data)>=x)
    {
        p1->next=p3;
        p3=p3->next;
        p1=p1->next;
        p1->next=p2;
    }
    else
        p3=p3->next;
}







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
