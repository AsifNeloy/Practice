#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}*nodepointer; //giving a pointer name here for a shortcut
//as here pointer is declared of the node, it will be easier to implement by just referencing it
nodepointer head= NULL, current; //creating head and current public here

void AddData(int item){
    nodepointer newNode = new Node; //making a new node to add
    newNode->data = item;
    newNode->next = NULL; //as it is the last value now so it will be null
    //adding a new node is done here only address giving to previous one is left
    if(head==NULL){
            head=newNode;
            //as first one will be stored in head
    }
    else{
        current->next = newNode;
        //if it is not the first node, then the next value of the current class is updated here
        //with this, address given to the previous node
    }
    current = newNode; //newly created node is indicating its the current one
    cout<<current->data<<" data inserted."<<endl;
}

void Display(){
    nodepointer point = head;
    //a pointer is taken which will be used for all node searching
    //head value given to start with it
    cout<<"Showing data : ";
    while(point != NULL)
    {
        cout<<point->data<<" ";
        point = point->next;
        //point's address will be now the address stored in next which is the next node's address
        //as like i++ in loop
    }cout<<endl;
}

void Search(int item){
    nodepointer point = head;
    //same as previous one
    while(point->data != item && point->next !=  NULL)
    {
        point = point->next; //same as before
        if(point->data==item){cout<<"Searched data "<<item<<" found in address "<<point->next<<endl;}
        else{cout<<"Searched data "<<item<<" not found"<<endl;}
    }
}

void Insert_Begin(int item ){
    nodepointer newNode = new Node; //same as before
    newNode->data = item;
    newNode->next = head;
    //head indicating a value here, that value will be linked with new node at the begin
    head = newNode; //now head is the new node
    cout<<head->data<<" data inserted at the begin."<<endl;
}

void Insert_Mid(int item, int previousValue){
    nodepointer newNode = new Node; //same as before
    newNode->data = item;
    nodepointer point = head; //same as before, indicator
    while(point->data != previousValue && point->next != NULL)
    {
        point = point->next; //same as before, as like i++
        if(point->data == previousValue){
            newNode->next = point->next; //newly created node will have the address of the next node
            point->next = newNode; //the pointing value means the previousValued node will have the address of the new node
            cout<<newNode->data<<" data inserted after "<<previousValue<<endl;
        }
        //else{cout<<item<<" not found"<<endl;}
    }
}

void Insert_End(int item){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = NULL; //as last data will hold null address
    if(head==NULL){
        head = newNode; //if it's the first data
        cout<<head->data<<" data inserted at the end."<<endl;
    }
    else{
        nodepointer point = head; //indicator
        while (point->next!=NULL){point = point->next;}
        point->next = newNode; //giving new address to the previous node
        cout<<newNode->data<<" data inserted at the end."<<endl;
    }
}

void Delete_Begin(){
    nodepointer point = head; //indicator to the first node
    head = point->next; //now head will be pointing at the next one
    cout<<point->data<<" data deleted at the top."<<endl;
    delete(point); //deleting the first node by it's pointer with delete function
}

void Delete_Mid(int item){
    nodepointer point = head, deletePointer; //indicator and another pointer to indicate the deleting one
    while(point->data != item && point->next != NULL){ point = point->next; }
    deletePointer = point->next; //it will indicate the address of the dying node
    point->next = point->next->next; //now the indicating node will have the address of the node which is after the dying node
    cout<<deletePointer->data<<" data deleted in the middle."<<endl;
    delete(deletePointer);
}

void Delete_End(){
    nodepointer point = head, deletePointer; //same as before
    while(point->next->next != NULL) //it stop at the 2nd last node
    { point = point->next; } //this will end at 2nd last and the node will have the address of the last node
    deletePointer = point->next; //same as before
    point->next = NULL; //as the last node will have null address
    cout<<deletePointer->data<<" data deleted at the end."<<endl;
    delete(deletePointer);
}

int main(){
    AddData(12);
    AddData(20);
    AddData(50);cout<<endl;
    Display();cout<<endl;
    Search(20);cout<<endl;
    Insert_Begin(99);
    Insert_Mid(45,50);
    Insert_End(33);cout<<endl;
    Display();cout<<endl;
    Delete_Begin();
    Delete_Mid(50);
    Delete_End();cout<<endl;
    Display();cout<<endl;
    return 0;
}
