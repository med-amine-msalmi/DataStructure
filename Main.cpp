#include <iostream>
#include "clsDbLinkedList.h"
#include "clsQueue.h"
#include "clsStack.h"
#include "DynamicArray.h"
#include "clsStackArr.h"
#include "clsString.h"
using namespace std;
int main()
{
     /*
    clsDbLinkedList<float> linkedlist;
   
    linkedlist.InsertAtBeginning(323);
    linkedlist.InsertAtBeginning(3.2);
    linkedlist.InsertAtBeginning(0.3);
    linkedlist.UpdateItem(2,0.002);

    linkedlist.PrintList();
    
    
    clsQueue<float> myqueue;
    myqueue.push(23.23);
    myqueue.push(99);
    myqueue.push(67);

     myqueue.UpdateItem(2,0);
    
    myqueue.InsertAfterIndex(0,2);
    myqueue.InsertAtFront(0);
 
    myqueue.Print();  
    
    clsStack<int> mystack;
    mystack.Print();
   
    
    arr.setItem(0,2);
    arr.setItem(1,3);
    arr.setItem(2,5);
    arr.setItem(3,6);
    cout<<arr.Find(4);
    arr.DeleteItemAt(1);
    arr.DeleteFirstItem();
    arr.DeleteLastItem();
    arr.DeleteFirstItem();

     
    DynamicArray<int> arr;
  
   
    arr.InsertAtEnd(1);
    arr.InsertAtEnd(2);
    arr.InsertAtEnd(3);
    
    arr.PrintList();
    cout<<arr.getLastItem();
    */
    clsString str;
    str.setValue("mohamed");
    str.setValue("ahmed");
    str.setValue("haythem");
 
    
//undo
    str.Undo();
    cout<<"after one undo :"<<str.getValue()<<endl;
    str.Undo();
    cout<<"after two undo :"<<str.getValue()<<endl;
    str.Undo();
    cout<<"after three undo:"<<str.getValue()<<endl;
//Redo
    str.Redo();
    cout<<"after one Redo :"<<str.getValue()  <<endl;
    str.Redo();
    cout<<"after two Redo :"<<str.getValue()  <<endl;
    str.Redo();
    cout<<"after three Redo:" <<str.getValue()<<endl;

}