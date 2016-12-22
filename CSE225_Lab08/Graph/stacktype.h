#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
template <class ItemType>
struct NodeType1
{
    ItemType info;
    NodeType1* next;
};
// Exception class used by Push when stack is full
class FullStack
{};
// Exception class used by Pop and Top when stack is empty
class EmptyStack
{};
template <class ItemType>
class StackType
{
public:
    StackType();
    ~StackType();
    void Push(ItemType);
    void Pop();
    ItemType Top();
    bool IsEmpty();
    bool IsFull();
private:
    NodeType1<ItemType>* topPtr;
};
#endif // STACKTYPE_H_INCLUDED
