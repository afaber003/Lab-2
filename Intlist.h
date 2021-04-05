#ifndef INTLIST_H
#define INTLIST_H

struct IntNode {
    int data = 0;
    IntNode* next = nullptr;
    IntNode* prev = nullptr;


    IntNode(){
        next = nullptr;
        prev = nullptr;
        data = 0;
    }
    IntNode(int newdata){
        next = nullptr;
        prev = nullptr;
        data = newdata;
    }

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
