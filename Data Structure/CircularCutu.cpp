#include <iostream>

using namespace std;

#define maxSize 5

class circularQueue {
  private:
    int Front, rear;
    int arr[maxSize];
public :
circularQueue()
{
    Front=-1;
    rear=-1;
    for(int i=0; i<maxSize; i++){
        arr[i]=0;
    }}

    bool isEmpty(){
        if (Front==-1 && rear==-1){
    return true;}
    else{
        return false;
    }}

    bool isFull(){
         if (((rear+1)%maxSize)==Front){
    return true;}
    else{return false;}}




    void enqueue(int val){
        if(isFull()){
            cout<<"queue full!"<<endl;
        }
        else if(isEmpty()){
                Front++;
            rear=(rear+1)% maxSize;
            arr[rear]=val;
            cout << val << " pushed into stack\n"; }}

int dequeue(){

    /*if (isEmpty()) {
        cout << "Queue Underflow";
        return 0;
    }*/
     if(Front==rear){Front=rear=-1;}
    else {
        Front=(Front+1)%maxSize;
        int temp = arr[Front];
        return temp;
    }

}
int frontElement(){

  return arr[Front];
}
void showQueue()
{
    if(isEmpty()) { cout << "Queue empty\n"; return; }
    else if(Front<=rear){
    cout << "The Elements of the queue are: \n";
	for( int i=Front; i<=rear; i++ ) cout << arr[i] << endl;
    }
    else{
          cout << "The Elements of the queue are: \n";
          for(int i=Front;i<=(maxSize-1);i++){cout<<arr[Front]<<endl;}
          for(int i=0;i<=rear;i++){cout<<arr[Front]<<endl;}
    }
}











};



int main()
{
    circularQueue s;
    s.enqueue(10);
     circularQueue s1;
    s1.enqueue(20);
     circularQueue s2;
    s2.enqueue(30);


   s.dequeue();
  cout <<  s.frontElement()<< " is front element\n";
  s.showQueue();
        if (s.isEmpty())
        cout << "Queue Is Empty\n"<<endl;
    else
        cout << "Queue Is Not Empty\n"<<endl;
    if(s.isFull()){cout<<"Queue is Full\n"<<endl;;}
    else{cout<<"Queue is not Full"<<endl;}

     s.showQueue();
     s.enqueue(2);
     s1.enqueue(3);
     s.dequeue();
     s.showQueue();

return 0;

}
