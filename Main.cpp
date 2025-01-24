#include <iostream>
#include "clsDbLinkedList.h"
using namespace std;
int main()
{
    clsDbLinkedList<float> list;
    list.InsertAtBeginning(4);
    list.InsertAtBeginning(3);
    list.InsertAtBeginning(3.23);
    list.InsertAtBeginning(6);
    list.InsertAtBeginning(0.25);
    list.InsertAtBeginning(0.25);

    list.InsertAfter(4,0.7);

    list.InsertAtEnd(3.14);
 // clsDbLinkedList<float>::Node* node=list.FindNodebyValue(4);
   // cout<<node->value; 

    list.Delete(3.23);
    list.DeleteFirstNode();
    list.DeleteLastNode();

  
    cout<<list.Size();

    list.PrintList();
    cout<<endl;

    

    clsDbLinkedList<int> dblinked;
    dblinked.InsertAtEnd(4);
    
    //dblinked.DeleteLastNode();
    //dblinked.PrintList();
    
}