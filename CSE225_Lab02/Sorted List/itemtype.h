#ifndef ITEMTYPE_H
#define ITEMTYPE_H

#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;
enum RelationType {LESS, GREATER, EQUAL};

class ItemType{

    public:
        ItemType();
        RelationType ComparedTo(ItemType);
        void Print();
        void Initialize(int);

    private:
        int value;
};

#endif // ITEMTYPE_H
