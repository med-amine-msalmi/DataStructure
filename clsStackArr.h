// stack class based on dynamicArray 

#pragma once
#include "DynamicArray.h"
template<typename T> class clsStackArr
{
private:
    DynamicArray<T> StackArr;
public:
    void Push()
    {
        StackArr.InsertAtEnd();
    }
    void Pop()
    {
        StackArr.DeleteLastItem();
    }
    void Print()
    {
        StackArr.PrintList();
    }
};