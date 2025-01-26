#pragma once
#include "clsDbLinkedList.h"
using namespace std;
template<typename T> class clsQueue
{
protected:
    clsDbLinkedList<T> _myqueue;
public:
     void push(T value)
    {
        _myqueue.InsertAtEnd(value);
    }
    void pop()
    {
        _myqueue.DeleteFirstNode();
    }
    int Size()
    {
        return _myqueue.Size();
    }
    void Print()
    {
        _myqueue.PrintList();
    }
    bool isEmpty()
    {
        _myqueue.isEmpty();
    }
    T front()
    {
        return _myqueue.getElement(0);
    }
    T back()
    {
        return _myqueue.getElement(Size()-1);
    }
    T getItem(int index)
    {
       return _myqueue.getElement(index);
    }
    void Reverse()
    {
        _myqueue.Reverse();
    }
    
    void UpdateItem(int index,T value)
    {
        _myqueue.UpdateItem(index,value);
        
    }
    void InsertAfterIndex(int index,T value)
    {
        _myqueue.InsertAfterIndex(index,value);
    }
    void Clear()
    {
        _myqueue.Clear();
    }
};