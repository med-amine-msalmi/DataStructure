// stack class based on dynamicArray 

#pragma once
#include "DynamicArray.h"
template<typename T> class clsStackArr
{
protected:
    DynamicArray<T> StackArr;
public:
    void Push(T value)
    {
        StackArr.InsertAtEnd(value);
    }
    void Pop()
    {
        StackArr.DeleteLastItem();
    }
    T GetLastItem()
    {
       return StackArr.getLastItem();
    }
    void Print()
    {
        StackArr.PrintList();
    }
    void SetLastItem(T value)
    {
        StackArr.setItem(StackArr.Size()-1,value);
    }
    

};