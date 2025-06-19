#pragma once
#include "clsStackArr.h"
class clsString
{
protected:
    clsStackArr<string> RedoStack;
    clsStackArr<string> UndoStack;
public:
    clsString()
    {
        RedoStack.Push(""); 
    }
    clsString(string str)
    {
        RedoStack.Push(str);
    }
    void setValue(string str)
    {
        RedoStack.Push(str);
    }
    string getValue()
    {
        return RedoStack.GetLastItem();
    }
    void Undo()
    {
        if(RedoStack.GetLastItem()=="")
            return;
        string top=RedoStack.GetLastItem();
        UndoStack.Push(top);
        RedoStack.Pop();
      
    }
    void Redo()
    {
        if(UndoStack.GetLastItem()=="")
            return;
        RedoStack.Push(UndoStack.GetLastItem());
        UndoStack.Pop();
    }
};