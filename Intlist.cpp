#include "Intlist.h"

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