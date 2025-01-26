#pragma once
#include <iostream>
#include "clsQueue.h"
template<typename T>
 class clsStack: public clsQueue<T>
{
    
    void push(T value)
    {
        this->_myqueue.InsertAtBeginning(value); 
        
    }
    void pop()
    {
        this->_myqueue.DeleteLastNode();
    }
    T Top()
    {
        this->front();
    }
    T Bottom()
    {
        this->back();
    }
    
};