#include "Intlist.h"
#include <iostream>

using namespace std;

IntList::~IntList(){
    IntNode* curr = head;
    IntNode* temp = nullptr;
    while (curr != dummyHead and curr != dummyTail){
        temp = curr->next;
        delete curr;
        curr = temp;
    }
}

void IntList::push_front(int value){
    IntNode* newone = new IntNode(value);
    newone->next = dummyHead->next;
    dummyHead->next = newone;
    newone->prev = dummyHead;
    newone->next->prev = newone;
}

ostream & operator<<(ostream &out, const IntList &rhs)
{
  if (rhs.head != nullptr)
  {
    IntNode *tempNode = rhs.head;
    while (tempNode != rhs.tail)
    {
      out << tempNode->data << " ";
      tempNode = tempNode->next;
    }
    out << rhs.tail->data;
  }

  return out;
}