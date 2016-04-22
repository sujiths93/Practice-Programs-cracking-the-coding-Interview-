#include <iostream>
#include <vector>
using namespace std;
class Stac
{
private:

    vector<int> stack_1;
    vector<int> stack_2;
public:
    bool isEmpty(vector<int>&);
    void push(int);
    int pop();
    void sort();
    int peep(vector<int>& s)
    {
        int x=s.back();
        return x;
    }
    void prints()
    {
        vector<int> :: iterator x=stack_2.end();
        while(x!=stack_2.begin())
        {
            x--;
            cout<<*x<<endl;
        }
    }
};
void Stac::push(int ele)
{
    stack_1.push_back(ele);
    cout<<"\nPUSHED\n";
}
int Stac::pop()
{
    int a;
    a=stack_1.back();
    stack_1.pop_back();
    cout<<"\nPOPPED\n";
    return a;
}
bool Stac::isEmpty(vector<int>& s)
{
    if(s.size()==0)
    {
        return 1;
    }
    return 0;
}
void Stac::sort()
{

    stack_2.push_back(pop());   //Inserting the first element into the stack
    int count=0;
    int x;

    while(!isEmpty(stack_1))
    {
        if(stack_1.back()>=stack_2.back()) // if the element on top of stack1 is greater than element on top of stack2 ,then insert element to stack_2
        {
            stack_2.push_back(pop());
        }

        else
            {
                x=pop();
                    while(x<stack_2.back()&&(!isEmpty(stack_2)))
                    {
                        push(stack_2.back());
                        ++count;
                        stack_2.pop_back();
                    }
                stack_2.push_back(x);   //Inserting element in to the correct position.

                while(count>=1)         //changing the stack to the previous state.
                {
                    stack_2.push_back(pop());
                    --count;
                }
            }

    }
}
int main()
{
    Stac obj;int n,ele;
    cout<<"\nENTER THE NUMBER OF ELEMETNS\n";
    cin>>n;
    cout<<"\nEnter the elements of the stack\n";
    for(int i=0;i<n;i++)
    {
        cin>>ele;
        obj.push(ele);
    }
    obj.sort();
    obj.prints();
    return 0;
}
