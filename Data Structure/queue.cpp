#include <bits/stdc++.h>

using namespace std;

#define MAX 4

class Queue {
    int fron,rare;

public:
    int que[MAX];

    Queue() { fron=-1,rare=-1; }
    bool enqueue(int x);
    int dequeue();
    bool isFull();
    bool isEmpty();
    void showQueue();
    int frontValue();
};
int Queue::frontValue(){return fron;}
bool Queue::enqueue(int x)
{


     if(isEmpty()) {
          fron=0;rare=0;
        que[rare] = x;
        cout << x << " enqueued\t (1st condition)\n""\t rare value : "<<rare<<"\t front value : "<<fron<< endl;
        return true;
    }
    else{
          rare=(rare+1)%MAX;
          que[rare] = x;

          cout << x << " enqueued \t (2nd condition)\n"<<"\t rare value :"<<rare<<"\t front value : "<<fron<<endl;
          return true;
    }
}

int Queue::dequeue()
{
     if(fron==rare){fron=rare=-1;}
    else {
        fron=(fron+1)%MAX;
        int temp=0;
        temp=que[fron-1];
        int x = temp;
        return x;
        que[fron]=x;
    }
}


bool Queue::isEmpty()
{
    return (rare== -1);
}
bool Queue::isFull()
{
    return (rare==(MAX-1));
}

void Queue::showQueue()
{
    if(isEmpty()) { cout << "Queue empty\n"; return; }
    else if(fron<=rare){
    cout << "The Elements of the queue are: \t (1st condition)\n"<<"\t rare value :"<<rare<<"\t front value : "<<fron<<endl;;
	for( int i=fron; i<=rare; i++ ) cout << "\t"<<que[i] << endl;
    }
    else{
          cout << "The Elements of the queue are: \t (2nd condition)\n"<<"\t rare value :"<<rare<<"\t front value : "<<fron<<endl;;
          for(int i=fron;i<MAX;i++){cout<<"\t"<<que[i]<<endl;}
          for(int i=0;i<=rare;i++){cout<<"\t"<<que[i]<<endl;}
    }
}


int main()
{
    class Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.showQueue();

    cout <<q.dequeue() << " dequeued from the queue\n"<<endl;
    cout <<q.dequeue() << " dequeued from the queue\n"<<endl;

    q.showQueue();


    q.enqueue(777);
    q.enqueue(888);

    q.showQueue();
    return 0;

}

