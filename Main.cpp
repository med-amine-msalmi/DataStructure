#include <iostream>
#include "clsDbLinkedList.h"
#include "clsQueue.h"
#include "clsStack.h"
#include "DynamicArray.h"
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
     */
    DynamicArray<int> arr(4);
    arr.setItem(0,2);
    arr.setItem(1,3);
    arr.setItem(2,5);
    arr.setItem(3,6);
   // cout<<arr.Find(4);
   /*arr.DeleteItemAt(1);
   arr.DeleteFirstItem();
   arr.DeleteLastItem();
   arr.DeleteFirstItem();
   */
    //arr.DeleteItem(4);
    arr.InsertAtBeginning(1);
    arr.InsertAtEnd(7);
    arr.InsertAfter(2,4);
    arr.PrintList();
  
    

  
}