#pragma once
#include <iostream>
#include "clsDbLinkedList.h"
template<typename T> class DynamicArray
{
protected:
    int _Size;
public:
    T* OrignalArray;
    DynamicArray(int Size=0)
    {
        if(Size<0)
            _Size=0;
        _Size=Size;
    OrignalArray=new T[_Size];
    }
    bool setItem(int index,T value)
    {
        if(index<0 || index>_Size-1)
            return false;
        OrignalArray[index]=value;
        return true;
    }
    int Size()
    {
        return _Size;
    }
    bool isEmpty()
    {
        return _Size==0 ? true:false;
    }
    bool Resize(int Size)
    {
        if(Size<0)
            return false;
        int limit=Size<_Size?Size:_Size;
        _Size=Size;
        T* copy=OrignalArray;
        OrignalArray=new T[Size];
        for(int i=0;i<limit;i++)
        {
            OrignalArray[i]=copy[i];
        }
        delete[] copy;
        return true;
    }
    T getItem(int index)
    {
        return OrignalArray[index];
    }
    void Reverse()
    {
        T* copy=OrignalArray;
        for(int i=_Size-1;i>=0;i--)
        {
            copy[i]=OrignalArray[_Size-1-i];
        }
        OrignalArray=copy;
        delete[] copy;
    }
    int Find(T value)
    {
        for(int i=0;i<_Size;i++)
        {
            if(OrignalArray[i]==value)
                return i;
        }
        return -1;
    }
    void Clear()
    { 
        _Size=0;
        delete[] OrignalArray;
        OrignalArray=new T[0];
    }
    bool DeleteItemAt(int index)
    {
        if (index < 0 || index >= _Size)
            return false;

        T* copy = new T[_Size - 1];
        for (int i = 0, j = 0; i < _Size; ++i)
        {
            if (i != index)
            {
            copy[j++] = OrignalArray[i];
            }
        }

        delete[] OrignalArray;
        OrignalArray = copy;
        _Size--;

        return true;
    }
    void DeleteFirstItem()
    {
        DeleteItemAt(0);
    }
    void DeleteLastItem()
    {
        DeleteItemAt(_Size-1);
    }
    void DeleteItem(T value)
    {
        int index=Find(value);
        if(index!=-1)
            DeleteItemAt(index);
    }
    bool InsertAt(int index,T value)
    {
        if(index<0 || index>_Size-1)
            return false;
        _Size++;
        T* copy=new T[_Size-1];
        for(int i=0;i<index;i++)
        {
            copy[i]=OrignalArray[i];
        }
        for(int i=index+1;i<_Size;i++)
        {
            copy[i]=OrignalArray[i-1];
        }
        OrignalArray=copy;
        setItem(index,value);
        return true;
    }
    bool InsertAtBeginning(T value)
    {
        InsertAt(0,value);
    }
    bool InserBefor(int index,T value)
    {
        InsertAt(index-1,value);
    }
    bool InsertAfter(int index,T value)
    {
        InsertAt(index+1,value);
    }
    bool InsertAtEnd(T value)
    {
        InsertAt(_Size,value);  
    }
    void PrintList()
    {
        cout<<"[";
        if(_Size!=0)
        {
            for (int i=0;i<_Size-1;i++)
            {
                cout<<OrignalArray[i]<<",";
                
            }
             cout<<OrignalArray[_Size-1];
        }
       cout<<"]";
    }
};