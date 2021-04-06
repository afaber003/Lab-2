#ifndef INTLIST_H
#define INTLIST_H

struct IntNode {
    int data;
    IntNode *prev;
    IntNode *next;
    IntNode(int data) : data(data), prev(nullptr), next(nullptr) {}
};

class IntList {

    public:
        //default constructor
        IntList(){
            dummyHead = new IntNode(0);
            dummyTail = new IntNode(0);

            dummyHead->next = dummyTail;
            dummyTail->prev = dummyHead;

            head = dummyHead;
            tail = dummyTail;
        }
        
        ~IntList();
        void push_front(int);


    private:
        IntNode* dummyHead;
        IntNode* dummyTail;
        IntNode* head;
        IntNode* tail;
        int size = 0; //added for extra help. I'm sure it will come in handy

};

#endif
