#include <iostream>
using namespace std;

struct Node{
 int value;
 Node* Prev;
 Node* next;
};

void InsertAtBeginning(Node* &Head,int value)
 {
    Node* newNode=new Node;
    newNode->next=Head;
    newNode->value=value;
    newNode->Prev=nullptr;
    if(Head!=nullptr)
    {
        Head->Prev=newNode;
    }
    
    Head=newNode;
 }
 Node* FindNodebyValue(Node* Head,int value)
{
    while(Head!=nullptr)
    {
        if(Head->value==value)
            return Head;
        Head=Head->next;
    }
}
void InsertAfter(Node* &Head,int PreviousValue,int value)
{
    Node* PreviousNode=FindNodebyValue(Head,PreviousValue);
    if(PreviousNode!=nullptr)
    {
    Node* newNode=new Node;
    newNode->Prev=PreviousNode;
    newNode->value=value;
    newNode->next=PreviousNode->next;
    if(PreviousNode->next!=nullptr)
        PreviousNode->next->Prev=newNode;
    PreviousNode->next=newNode;
    }

}
void InsertAtEnd(Node* &Head,int value)
{
    Node* CurrentNode=Head;
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=nullptr;
    if(Head!=nullptr)
    {
    while(CurrentNode->next!=nullptr)
    {
        CurrentNode=CurrentNode->next;
    }
    newNode->Prev=CurrentNode;
    CurrentNode->next=newNode;
    return;
    }
    newNode->Prev=nullptr;
    Head=newNode;
}
void DeletNode(Node* &Head,int value)
{
    Node* CurrentNode=FindNodebyValue(Head,value);
    if(CurrentNode==nullptr || Head==nullptr)
        return;
    if(CurrentNode==Head)
        Head=CurrentNode->next;
    if(CurrentNode->next!=nullptr)
        CurrentNode->next->Prev=CurrentNode->Prev;
    if(CurrentNode->Prev!=nullptr)
        CurrentNode->Prev->next=CurrentNode->next;
    delete CurrentNode;
}
void DeleteFirstNode(Node* &Head)
{
    if(Head==nullptr)
        return;
    
    Node* NodeToDelete=Head;
    Head=Head->next;
    if(Head->next!=nullptr)
        Head->next->Prev=nullptr;
    
    delete NodeToDelete;
}
void DeleteLastNode(Node* &Head)
{
    if(Head==nullptr)
        return;
    Node* CurrentNode=Head;
    while(CurrentNode->next!=nullptr)
    {
        CurrentNode=CurrentNode->next;
    }
    if(CurrentNode->Prev!=nullptr)
        CurrentNode->Prev->next=nullptr;
    else
        Head=nullptr;
    delete CurrentNode;
}
 void PrintList(Node* Head)
 {
    while(Head!=nullptr)
    {
        cout<<Head->value<<"|";
        Head=Head->next;
    }
 }

 int main()
 {
    Node* Head=nullptr;
    InsertAtBeginning(Head,6);
    InsertAtBeginning(Head,5);
    InsertAtBeginning(Head,4);
    InsertAtBeginning(Head,3);
    
    InsertAfter(Head,4,0);
    InsertAtEnd(Head,7);

    DeletNode(Head,3);
    DeletNode(Head,7);

    DeleteFirstNode(Head);
    
    DeleteLastNode(Head);
    PrintList(Head);
 }