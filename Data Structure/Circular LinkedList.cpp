#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}*nodepointer;
nodepointer head= NULL, current;
int nodeCount=0;

void AddData(int item){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = NULL;
    if(head==NULL){
            head=newNode;
    }
    else{
        current->next = newNode;
    }
    current = newNode;
    current->next=head;
    nodeCount++;
    cout<<current->data<<" data inserted."<<endl;
}

void Display(){
    nodepointer point = head;
    int i=0;
    cout<<"Showing data : ";
    while(i<nodeCount)
    {
        cout<<point->data<<" ";
        point = point->next;
        i++;
    }cout<<endl;
}

void Search(int item){
    nodepointer point = head;
    int i=0;
    while(point->data != item && i<nodeCount)
    {
        point = point->next;
        if(point->data==item){cout<<"Searched data "<<item<<" found in address "<<point->next<<endl;}
        else{cout<<"Searched data "<<item<<" not found"<<endl;}
        i++;
    }
}

void Insert_Begin(int item ){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = head;
    nodeCount++;
    cout<<head->data<<" data inserted at the begin."<<endl;
}

void Insert_Mid(int item, int previousValue){
    nodepointer newNode = new Node;
    newNode->data = item;
    nodepointer point = head;
    int i=0;
    while(point->data != previousValue && i<nodeCount)
    {
        point = point->next;i++;
        if(point->data == previousValue){
            newNode->next = point->next;
            point->next = newNode;
            cout<<newNode->data<<" data inserted after "<<previousValue<<endl;
        }
        //else{cout<<item<<" not found"<<endl;}
    }
    nodeCount++;
}

void Insert_End(int item){
    nodepointer newNode = new Node;
    newNode->data = item;
    newNode->next = head;
    if(head==NULL){
        head = newNode;
        cout<<head->data<<" data inserted at the end."<<endl;
    }
    else{
        nodepointer point = head;
        int i=0;
        while (i<nodeCount){point = point->next;i++;}
        point->next = newNode;
        cout<<newNode->data<<" data inserted at the end."<<endl;
    }
    nodeCount++;
}

void Delete_Begin(){
    nodepointer point = head;
    head = point->next;
    cout<<point->data<<" data deleted at the top."<<endl;
    delete(point);
    nodeCount--;
}

void Delete_Mid(int item){
    nodepointer point = head, deletePointer;
    int i=0;
    while(point->data != item && i<nodeCount){ point = point->next;i++; }
    deletePointer = point->next;
    point->next = point->next->next;
    cout<<deletePointer->data<<" data deleted in the middle."<<endl;
    delete(deletePointer);
    nodeCount--;
}

void Delete_End(){
    nodepointer point = head, deletePointer;
    while(point->next->next != head)
    { point = point->next; }
    deletePointer = point->next;
    point->next = head;
    cout<<deletePointer->data<<" data deleted at the end."<<endl;
    delete(deletePointer);
    nodeCount--;
}

int main(){
    AddData(12);
    AddData(20);
    AddData(50);cout<<endl;
    Display();cout<<endl;
    Search(20);cout<<endl;
    Insert_Begin(99);//bug starts
    Insert_Mid(45,50);
    Insert_End(33);cout<<endl;
    Display();cout<<endl;
    Delete_Begin();
    Delete_Mid(50);
    Delete_End();cout<<endl;
    Display();cout<<endl;
    return 0;
}

