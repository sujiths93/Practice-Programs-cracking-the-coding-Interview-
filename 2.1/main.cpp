#include <iostream>

using namespace std;

struct nod
{
    int data;
    struct nod *next;
}*start,*newnode,*cur,*p1,*p2,*temp;
typedef struct nod node;

void removedup()
{
    p1=start;

    for(;p1!=NULL;p1=p1->next)
    {

        for(p2=p1->next;p2!=NULL;p2=p2->next)
        {
            if(p1->data==p2->data)
            {
                temp=p2;
                p2=p1;
                while(p2->next!=temp)
                {
                    p2=p2->next;
                }
                p2->next=temp->next;
                delete(temp);
            }
        }
    }
}
void print()
{
    cur=start;
    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
}
int main()
{
    int n;
   //start=(node *) malloc(sizeof(node));
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
        cur=start;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=newnode;
    }
   }

   cout<<"\nPRINTING THE NODES"<<endl;
   cur=start;
  print();

  removedup();
  cout<<endl;
  print();


    return 0;
}
