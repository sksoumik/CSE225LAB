#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED

//Exception class used by push when stack is full
class FullStack
{};

//Exception class used by pop and top when stack is empty
class EmptyStack
{};

template <class ItemType>
class StackType{

    struct NodeType{
        ItemType info;
        NodeType* next;
    };

    public:
        StackType();
        ~StackType();
        void Push(ItemType);
        void Pop();
        ItemType Top();
        bool IsEmpty();
        bool IsFull();
        void PrintStack();
        void ReplaceItem(ItemType, ItemType);

    private:
        NodeType* topPtr;
};

#endif // STACKTYPE_H_INCLUDED
