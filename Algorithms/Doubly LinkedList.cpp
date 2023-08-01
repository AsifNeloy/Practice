#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*nodepointer;

nodepointer head=NULL, tail=NULL, current;

void AddData(int item){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;

    if(head==NULL){
            head=newNode;
            newNode->prev=NULL;
            tail=newNode;
    }
    else{
        current->next = newNode;
        newNode->prev=current;
    }
    current = newNode;
    tail=newNode;

    cout<<current->data<<" data inserted."<<endl;
}

void Display(){
    nodepointer point = head;
    cout<<"Showing data : ";
    while(point != NULL)
    {
        cout<<point->data<<" ";
        point = point->next;
    }cout<<endl;
}

void Search(int item){
    nodepointer point = head;

    while(point->data != item && point->next !=  NULL)
    {
        point = point->next;
        if(point->data==item){cout<<"Searched data "<<item<<" found in address "<<point->next<<endl;}
        else{cout<<"Searched data "<<item<<" not found"<<endl;}
    }
}

void Insert_Begin(int item ){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;
    cout<<head->data<<" data inserted at the begin."<<endl;
}

void Insert_Mid(int item, int previousValue){
    nodepointer newNode = new Node;
    newNode->data = item;
    nodepointer point = head;
    while(point->data != previousValue && point->next != NULL)
    {
        point = point->next;
        if(point->data == previousValue){
            newNode->next = point->next;
            newNode->prev = point;
            point->next = newNode;
            cout<<newNode->data<<" data inserted after "<<previousValue<<endl;
        }
        //else{cout<<item<<" not found"<<endl;}
    }
}

void Insert_End(int item){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;
    if(head==NULL){
        head = newNode;
        newNode->prev = NULL;
        tail=newNode;
        cout<<head->data<<" data inserted at the end."<<endl;
    }
    else{
        nodepointer point = head;
        while (point->next!=NULL){point = point->next;}
        point->next = newNode;
        newNode->prev = point;
        tail=newNode;
        cout<<newNode->data<<" data inserted at the end."<<endl;
    }
}

void Delete_Begin(){
    nodepointer point = head;
    head = point->next;
    head->prev=NULL;
    cout<<point->data<<" data deleted at the top."<<endl;
    delete(point);
}

void Delete_Mid(int item){
    nodepointer point = head, deletePointer;
    while(point->next->data != item && point->next != NULL){ point = point->next; }
    deletePointer = point->next;
    point->next->next->prev=point;
    point->next = point->next->next;
    cout<<deletePointer->data<<" data deleted in the middle."<<endl;
    delete(deletePointer);
}

void Delete_End(){
    nodepointer point = head, deletePointer;
    while(point->next->next != NULL)
    { point = point->next; }
    deletePointer = point->next;
    point->next = NULL;
    point->prev=point->prev->prev;
    tail=point;
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
