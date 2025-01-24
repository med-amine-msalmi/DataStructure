#pragma once
#include "clsDbLinkedList.h"
using namespace std;
template<typename T> class clsQueue
{
private:
    clsDbLinkedList<T> MyQueue;
public:
     void push(T value)
    {
        MyQueue.InsertAtEnd(value);
    }
    void pop()
    {
        MyQueue.DeleteFirstNode();
    }
    void Size()
    {
        return MyQueue.size();
    }
    void Print()
    {
        MyQueue.PrintList();
    }
    bool isEmpty()
    {
        MyQueue.isEmpty();
    }
    T fornt()
    {
        return MyQueue.getElement(0);
    }
    T back()
    {
        return MyQueue.getElement(Size()-1);
    }
};