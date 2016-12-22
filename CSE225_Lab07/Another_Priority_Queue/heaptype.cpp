#include "heaptype.h"
template<class ItemType>
void Swap(ItemType& one, ItemType& two)
{
ItemType temp;
temp = one;
one = two;
two = temp;
}
template<class ItemType>
void HeapType<ItemType>::ReheapDown(int root, int bottom)
{
int minChild;
int rightChild;
int leftChild;
leftChild = root*2+1;
rightChild = root*2+2;
if (leftChild <= bottom)
{
if (leftChild == bottom)
minChild = leftChild;
else
{
if(elements[leftChild]>=elements[rightChild])
minChild = rightChild;
else
minChild = leftChild;
}
if (elements[root] > elements[minChild])
{
Swap(elements[root], elements[minChild]);
ReheapDown(minChild, bottom);
}
}
}
template<class ItemType>
void HeapType<ItemType>::ReheapUp(int root, int bottom)
{
int parent;
if (bottom > root)
{
parent = (bottom-1) / 2;
if (elements[parent] > elements[bottom])
{
Swap(elements[parent], elements[bottom]);
ReheapUp(root, parent);
}
}
}
