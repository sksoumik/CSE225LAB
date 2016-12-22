#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include "itemtype.h"

class FullStack
//Exception class thrown
//by push when stack is full
{};

class EmptyStack
//Exception class thrown
//by pop and top when stack is empty
{};

class StackType{

    public:
        StackType();
        bool IsFull();
        bool IsEmpty();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        void PrintStack();
        int sumOdd(StackType);

    private:
        int top;
        ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
