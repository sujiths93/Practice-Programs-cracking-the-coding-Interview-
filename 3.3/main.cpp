#include <iostream>
#include <vector>

using namespace std;

class SetofStacks
{
    public:
    int stk[10];
    int top;
    void push(int);
   // void pop();
    //void isempty();
    //void full();
    int getcurrentstack();mai
    int isempty();
    SetofStacks()
    {
    top=-1;
    }
};
int i=0;
void SetofStacks::push(int val)
{
    top=top+1;
    stk[top]=val;
}
int  SetofStacks::getcurrentstack()
{
    int a=0;
        if(isempty())
        {
            ++i;
            return i;
        }
        return i;
}
int SetofStacks::isempty()
{
    if(top==10)
        return 1;
    return 0;
}
int main()
{
    vector<SetofStacks> stacks;
    int value;
    cout<<"Enter the element";
    cin>>value;
    int a=stacks[i].getcurrentstack();
    cout<<a;
    stacks[a].push(value);
}

