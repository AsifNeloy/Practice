#include<bits/stdc++.h>
using namespace std;
#define maxSize 4

class CircularQueue{
    int front,rare;
public:
    int queue[maxSize];
    CircularQueue(){front=-1;rare=-1;}
    bool isEmpty();
    bool isFull();
    bool enqueue(int x);
    int dequeue();
    void showQueue();
    int frontElement();
};

bool CircularQueue::isEmpty(){
    if(front==-1 && rare==-1){return true;}
}

bool CircularQueue::isFull(){
    if(((rare+1)%maxSize)==front){return true;}
}

bool CircularQueue::enqueue(int x){
    if(isFull()){cout<<"Queue is full"<<endl;}
    else if(isEmpty()){front=0;rare=0;queue[rare]=x;cout<<queue[rare]<<" enqueued"<<endl;}
    else{rare=(rare+1)%maxSize;queue[rare]=x;cout<<queue[rare]<<" enqueued"<<endl;}
}

int CircularQueue::dequeue(){
    if(isEmpty()){cout<<"Queue is empty! Dequeue is not possible"<<endl;}
    else if(front==rare){front=-1;rare=-1;}
    else{front=(front+1)%maxSize;return queue[front];}
}

int CircularQueue::frontElement(){return queue[front];}

void CircularQueue::showQueue(){
    if(isEmpty()){cout<<"Cannot show queue becasue it is empty!"<<endl;}
    else if(front<=rare){for(int i=front;i<=rare;i++){cout<<queue[front]<<endl;}}
    else{
        for(int i=front;i<=(maxSize-1);i++){cout<<queue[front]<<endl;}
        for(int i=0;i<=rare;i++){cout<<queue[front]<<endl;}
    }
}

int main(){
    CircularQueue obj;
    obj.enqueue(10);
    obj.enqueue(20);
    obj.enqueue(30);
    obj.enqueue(40);
    cout<<"Front value is : "<<obj.frontElement()<<endl;
    cout<<"Dequeue : "<<obj.dequeue()<<endl;
    obj.showQueue();
    obj.enqueue(50);
    obj.enqueue(60);
    obj.showQueue();

    return 0;
}
