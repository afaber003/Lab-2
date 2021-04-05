#ifndef INTLIST_H
#define INTLIST_H

struct IntNode {
    int data;
    IntNode *prev;
    IntNode *next;
    IntNode(int data) : data(data), prev(0), next(0) {}
};

class IntList {

    public:
        //default constructor
        Intlist(){
            IntNode* head = nullptr;
            IntNode* tail - nullptr;
            size = 0;
        }


    private:
        IntNode* head = nullptr;
        IntNode* tail = nullptr;
        int size = 0; //added for extra help. I'm sure it will come in handy

};

#endif
