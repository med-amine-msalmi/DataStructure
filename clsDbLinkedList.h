
#pragma once
#include <iostream>
using namespace std;
template <typename T> class clsDbLinkedList{
private:
int size=0;
    
public:
    struct Node{
        T value;
        Node* Prev;
        Node* Next;
    };
     
    Node* Head=nullptr;
    void InsertAtBeginning(T value)
    {
        Node* newNode=new Node;
        newNode->Next=Head;
        newNode->value=value;
        newNode->Prev=nullptr;
        if(Head!=nullptr)
        {
            Head->Prev=newNode;
        }
        Head=newNode;
        size++;
    }
    Node* getNodebyValue(T value)
    {
        Node* Current=Head;
        while(Current!=nullptr)
        {
            if(Current->value==value)
                return Current;
            Current=Current->Next;
        }
        return nullptr;
    }
    Node* getNodeByIndex(int Index)
    {
     int Counter = 0;

        if (Index > size- 1 || Index < 0)
            return nullptr;

        Node* Current = Head;
        while (Current != nullptr && (Current->Next != nullptr)) {

            if (Counter == Index)
                break;

            Current = Current->Next;
            Counter++;

        }

        return Current;

    }
    T getElement(int index)
    {
        Node* node=getNodeByIndex(index);
        if(node!=nullptr)
            return node->value;
        throw out_of_range("index out of range");
    }
    void InsertAfter(T PreviousValue,T value)
    {
        Node* PreviousNode=getNodebyValue(PreviousValue);
        if(PreviousNode!=nullptr)
        {
        Node* newNode=new Node;
        newNode->Prev=PreviousNode;
        newNode->value=value;
        newNode->Next=PreviousNode->Next;
        if(PreviousNode->Next!=nullptr)
            PreviousNode->Next->Prev=newNode;
        PreviousNode->Next=newNode;
        size++;
        }
    }
    void InsertAtEnd(T value)
    {
        Node* CurrentNode=Head;
        Node* newNode=new Node;
        newNode->value=value;
        newNode->Next=nullptr;
        size++;
        if(Head!=nullptr)
        {
        while(CurrentNode->Next!=nullptr)
        {
            CurrentNode=CurrentNode->Next;
        }
        newNode->Prev=CurrentNode;
        CurrentNode->Next=newNode;
        return;
        }
        newNode->Prev=nullptr;
        Head=newNode;
        
    }
    void Delete(T value)
    {
        Node* CurrentNode=getNodebyValue(value);
        if(CurrentNode==nullptr || Head==nullptr)
            return;
        if(CurrentNode==Head)
            Head=CurrentNode->Next;
        if(CurrentNode->Next!=nullptr)
            CurrentNode->Next->Prev=CurrentNode->Prev;
        if(CurrentNode->Prev!=nullptr)
            CurrentNode->Prev->Next=CurrentNode->Next;
        size--;
        delete CurrentNode;
    }
    void DeleteFirstNode()
    {
        if(Head==nullptr)
            return;

        Node* NodeToDelete=Head;
        Head=Head->Next;
        if(Head!=nullptr)
            Head->Prev=nullptr;
        size--;
        delete NodeToDelete;
    }
    void DeleteLastNode()
    {
        if(Head==nullptr)
            return;
        Node* CurrentNode=Head;
        while(CurrentNode->Next!=nullptr)
        {
            CurrentNode=CurrentNode->Next;
        }
        if(CurrentNode->Prev!=nullptr)
            CurrentNode->Prev->Next=nullptr;
        else
            Head=nullptr;
        size--;
        delete CurrentNode;
    }
    void Clear()
    {
        while(size>0)
        {
            DeleteFirstNode();
        }   
    }
    int Size()
    {
        return size;
    }
    bool isEmpty()
    {
        return size==0?true:false;
    }
    void Reverse()
    {
        clsDbLinkedList ReversedLinked;
        while (size > 0)
        {
            ReversedLinked.InsertAtBeginning(Head->value);
            DeleteFirstNode();
        }
        *this = ReversedLinked;
    }
     void PrintList()
    {
        cout<<"[";
        while(Head!=nullptr)
        {
            cout<<Head->value;
            Head=Head->Next;
            if(Head!=nullptr)
            {
                cout<<",";
            }
        }
        cout<<"]";
    }
};