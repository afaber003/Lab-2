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

    if (!empty()){
      head = newone;
      tail = dummyTail->prev;
  }
}

void IntList::pop_front()
{
  if (empty()) return;
  IntNode* oldHead = head;
  dummyHead->next = head->next;
  head->next->prev = dummyHead;
  delete oldHead;

  if (!empty()){
      head = dummyHead->next;
      tail = dummyTail->prev;
  }

}

void IntList::push_back(int value)
{
  IntNode* newone = new IntNode(value);
  newone->prev = dummyTail->prev;
  dummyTail->prev = newone;
  newone->prev->next = newone;
  newone->next = dummyTail;
  
  if (!empty()){
      head = dummyHead->next;
      tail = dummyTail->prev;
  }
}

void IntList::pop_back()
{
  if (empty()) return;
  IntNode* oldTail = tail;
  dummyTail->prev = tail->prev;
  tail->prev->next = dummyTail;
  delete oldTail;

  if (!empty()){
      head = dummyHead->next;
      tail = dummyTail->prev;
  }
}

ostream & operator<<(ostream &out, const IntList &rhs)
{
  if (rhs.empty()) return out;
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

bool IntList::empty() const {
    if (dummyHead->next == dummyTail) {return true;}
    else return false;
}

void IntList::printReverse() const {
    if (empty()) return;
    IntNode* currnode = tail;
    while (currnode->prev != dummyHead){
        cout << currnode->data << ' ';
        currnode = currnode->prev;
    }
    cout << currnode->data;
}