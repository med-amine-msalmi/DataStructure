#include <iostream>
using namespace std;
struct Node
{
    int value;
    Node * next;
};
void InsertAtBeginning(Node* &Head,int value)
{
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=Head;

    Head=newNode;


}
void InsertAtEnd(Node* &Head,int value)
{
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=nullptr;
    if(Head==nullptr)
        Head=newNode;
    Node* CurrentNode=Head;
    while(CurrentNode->next!=nullptr)
    {
        CurrentNode=CurrentNode->next;
    }
    CurrentNode->next=newNode;
}
void PrintLinkedList(Node* Head)
{
        while(Head!=nullptr)
    {
        cout<<Head->value<<"|";
        Head=Head->next;
    }

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
void InsertAfter(Node* &Head,int After,int value)
{
    Node* node=FindNodebyValue(Head,After);
    if(node==nullptr)
        return;
    Node* newNode=new Node;
    newNode->value=value;
    newNode->next=node->next;
    node->next=newNode;
}
void Delete(Node* Head,int value)
{
  
    Node* DeletedNode=FindNodebyValue(Head,value);
    Node* PreviousNode=Head;
    while(PreviousNode->next!=DeletedNode)
    {
        PreviousNode=PreviousNode->next;
    }
    PreviousNode->next=DeletedNode->next;
    delete DeletedNode;
}
void DeleteFirstNode(Node* &Head)
{
   
    if(Head==nullptr)
        return;
    Node* Current=Head;
    Head=Current->next;
    delete Current;
}
void DeleteLastNode(Node* Head)
{
    if(Head==nullptr)
        return ;
    Node* CurrentNode=Head;
    Node* Prev=new Node;
    while(CurrentNode->next!=nullptr)
    {
        Prev=CurrentNode;
        CurrentNode=CurrentNode->next;
    }
    Prev->next=nullptr;
    delete CurrentNode;
}
