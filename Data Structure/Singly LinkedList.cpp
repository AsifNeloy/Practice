#include<bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node *next;
}*nodepointer;

nodepointer head= NULL, current;

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
        cout<<head->data<<" data inserted at the end."<<endl;
    }
    else{
        nodepointer point = head;
        while (point->next!=NULL){point = point->next;}
        point->next = newNode;
        cout<<newNode->data<<" data inserted at the end."<<endl;
    }
}

void Delete_Begin(){
    nodepointer point = head;
    head = point->next;
    cout<<point->data<<" data deleted at the top."<<endl;
    delete(point);
}

void Delete_Mid(int item){
    nodepointer point = head, deletePointer;
    while(point->data != item && point->next != NULL){ point = point->next; }
    deletePointer = point->next;
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
    cout<<deletePointer->data<<" data deleted at the end."<<endl;
    delete(deletePointer);
}

int main(){
    int nn; char getvalue;
    cout<<"Enter number of nodes : ";
    cin>>nn;
    for(int i=0;i<nn;i++){
        int p;
        cout<<"Enter value : "; cin>>p; AddData(p);
    }cout<<endl;

    MAIN:
    while(true){
    cout<<endl<<"\tType 't' to traverse all value\n\tType 's' to search in nodes"<<endl;
    cout<<"\tType 'i' to insert\n\tType 'd' to delete\n\tType 'x' to exit"<<endl;
    cout<<"\t:";cin>>getvalue;
    if(getvalue=='t'){Display();cout<<endl;/*break MAIN;*/}
    if(getvalue=='s'){int n;cout<<"Enter number to search : ";cin>>n;Search(n);cout<<endl;/*break MAIN;*/}
    if(getvalue=='i'){
        INSERTION:
        while(true){
            char x;
            cout<<"\tType 'b' to insert at the begin\n\tType 'm' to insert at the middle\n\tType 'e' to insert at the end\n\tType 'x' to exit insertion"<<endl;
            cout<<"\t:";cin>>x;
            if(x=='b'){cout<<"Enter data : ";int b;cin>>b;Insert_Begin(b);/*break INSERTION;*/}
            if(x=='m'){cout<<"Enter previous data to insert after it : ";int previous, mn;cin>>previous;cout<<"\nEnter data to insert : ";cin>>mn;Insert_Mid(mn,previous);/*break INSERTION;*/}
            if(x=='e'){cout<<"Enter data : ";int v;cin>>v;Insert_End(v);/*break INSERTION;*/}
            if(x=='x'){break;}
        }
    }cout<<endl;
    if(getvalue=='d'){
        DELETION:
        while(true){
        char x;
        cout<<"\tType 'b' to delete at the begin\n\tType 'm' to delete at the middle\n\tType 'e' to delete at the end\n\tType 'x' to exit insertion"<<endl;
        cout<<"\t:";cin>>x;
        if(x=='b'){Delete_Begin(); /*break DELETION;*/}
        if(x=='m'){cout<<"Enter data to delete : ";int y;cin>>y;Delete_Mid(y);/*break DELETION;*/}
        if(x=='e'){Delete_End();/*break DELETION*/}
        if(x=='x'){break;}
        }
    }

    }
    return 0;
}

