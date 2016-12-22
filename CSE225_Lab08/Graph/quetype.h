#ifndef QUETYPE_H_INCLUDED
#define QUETYPE_H_INCLUDED
template <class ItemType>
struct NodeType
{
    ItemType info;
    NodeType* next;
};
// Exception class used by Enqueue when queue is full.
class FullQueue {};
// Exception class used by Dequeue when queue is empty.
class EmptyQueue {};
template <class ItemType>
class QueType
{
public:
    QueType();
    ~QueType();
    void MakeEmpty();
    void Enqueue(ItemType);
    void Dequeue(ItemType&);
    bool IsEmpty();
    bool IsFull();
private:
    NodeType<ItemType>* front;
    NodeType<ItemType>* rear;
};
#endif // QUETYPE_H_INCLUDED
