#include <iostream>
using namespace std;
struct dogscats{
char x;
struct dogscats *front;
struct dogscats *rear;
};
void enqueue(char ch){
{

}


void dequeueAny();
void dequeDog();
void dequeCat();
int main()
{
    *front=*rear=NULL;
    char ch;
    cout<<"\nDo you want to enter dog or cat into the queue (D OR C)\n";
    cin>>ch;
    enqueue(ch);

    cout<<"\nWhat animal do you want to adopt ??? (((C||D||Any)))\n";
    cin>>ch;
    deque(ch);
    return 0;
}
