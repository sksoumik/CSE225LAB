#ifndef ITEMTYPE_H_INCLUDED
#define ITEMTYPE_H_INCLUDED
#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;

class ItemType{

    public:
        ItemType();
        void Print();
        void Initialize(int);
        int getValue();

    private:
        int value;

};

#endif // ITEMTYPE_H_INCLUDED
