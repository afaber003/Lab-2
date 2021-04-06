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

void IntList::push_back(int value)
{
  IntNode* newone = new IntNode(value);
  newone->prev = dummyTail->prev;
  dummyTail->prev = newone;
  newone->prev->next = newone;
  newone->next = dummyTail;

}

ostream & operator<<(ostream &out, const IntList &rhs)
{
  if (rhs.head != nullptr)
  {
    IntNode *tempNode = rhs.head;
    while (tempNode != nullptr)
    {
      if (tempNode == rhs.dummyHead || tempNode == rhs.dummyTail)
      {
      }
      else if (tempNode != rhs.tail)
      {
        out << tempNode->data << " ";
      }
      else
      {
        out << tempNode->data;
      }
      tempNode = tempNode->next;
    }
    //out << rhs.dummyTail->prev->data;
  }

  return out;
}