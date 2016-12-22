#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include<iostream>
using namespace std;
const int MAX_ITEMS = 5;
class ItemType
{
public:
    ItemType();
    void Print();
    void Initialize(int);
private:
    int value;
};
#endif
