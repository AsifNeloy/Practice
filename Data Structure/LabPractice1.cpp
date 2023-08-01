#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

class Queue {

    int fron,rare;
public:

    char que[MAX];
    Queue() { fron=-1,rare=-1; }

    bool enqueue(char x);

    char dequeue();

    bool isFull();

    bool isEmpty();

    void showQueue();

};

bool Queue::enqueue(char x)
{
    if (rare >= (MAX - 1)) {
        cout << "Queue Overflow\n";
        return false;
    }
    else {
        que[++rare] = x;
        cout << x << " enqueued\n";
        return true;
    }
}
char Queue::dequeue()
{
    if (rare < 0) {
        cout << "Queue Underflow";
        return '0';
    }
    else {
          fron++;
        char x = que[fron--];
        return x;
    }
}

bool Queue::isEmpty(){return (rare== -1);}

bool Queue::isFull(){    return (rare==(MAX-1));}

void Queue::showQueue()
{
    if(isEmpty()) { cout << "Queue empty\n"; return; }
    cout << "The Elements of the queue are: \n";
    for( int i=rare; i>=0; i-- ) cout << que[i];
}



int main()

{
    Queue q;
    char input[MAX];
    cout<<"Text reverse(until stop sign (.) comes"<<endl<<"Enter Text : "<<endl;
    for(int i=0;i<MAX;i++){
        cin>>input[i];

        q.enqueue(input[i]);
        if(input[i]=='.'){break;}
        }
    q.showQueue();

    return 0;
}
