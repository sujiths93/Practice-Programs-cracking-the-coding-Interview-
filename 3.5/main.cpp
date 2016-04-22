#include <iostream>
#include <vector>
using namespace std;
//Considering that the top of the stack is the tail end of the queue.
class MyQueue
{
private:
    vector<int> stack_1; // Using this as main stack.
    vector<int> stack_2; // Using this as temporary stack.
    public:
    void push(int);
    int pop();
    void curr_content();
};
void MyQueue::push(int val)
{
    stack_1.push_back(val);
}
int MyQueue::pop()
{
    int p;int va;
    vector<int>::iterator it=stack_1.end();
    while(it!=stack_1.begin())
    {
        it--;
        p=stack_1.back();//retrieving the element from the top
        stack_1.pop_back();//clearing the space
        stack_2.push_back(p);//pushing the top element into stack2
    }
    //once all elements are pushed
    p=stack_2.back(); //retrieving the top element of the stack2
    stack_2.pop_back();//Popping out the top element from the top of stack2
    vector<int>::iterator it1=stack_2.end();
    int p1;
    //setting back the previous stack status of stack_1
    while(it1!=stack_2.begin())
    {
        it1--;
        p1=stack_2.back();
        stack_2.pop_back();
        stack_1.push_back(p1);
    }
    return p;
}
//prints the current contents of the stack
void MyQueue::curr_content()
{
    vector<int>::iterator v=stack_1.begin();
    while(v!=stack_1.end())
    {
        cout<<*v<<endl;
        v++;
    }
}
int main()
{
    MyQueue q;
    int ele;
    int n;
    cout<<"Enter the number of elements\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ele;
    q.push(ele);
    }
    cout<<"CONTENTS OF THE QUEUE"<<endl;
    q.curr_content();

    cout<<"POPPED ELEMENT"<<q.pop();

    cout<<"CONTENTS OF THE QUEUE"<<endl;
    q.curr_content();
        return 0;
}
