#include <iostream>
#include "clsDbLinkedList.h"
#include "clsQueue.h"
#include "clsStack.h"
using namespace std;
int main()
{
    clsDbLinkedList<float> linkedlist;
    /*
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
     */
    clsStack<int> mystack;
    mystack.Print();
    
    
  
}