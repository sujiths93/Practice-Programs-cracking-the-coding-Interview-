#include <iostream>
#include <vector>
using namespace std;
struct linked
{
int node_value;
struct linked *next;
linked()
{
    node_value=0;
    next=NULL;
}
    }*newnode;
void dfslinked(*root)
{
    vector<linked> l;

    //pushing the root element
    l.push_back(linked());
    l[0].node_value=root->value;
    i=0;
    while(l[i].next!=NULL)
    {
        l.push_back(linked());
        l[i+1].node_value=->left->value;

        newnode=new node;


    }









}


int main()
{

    vector<linked> l;







    return 0;
}
