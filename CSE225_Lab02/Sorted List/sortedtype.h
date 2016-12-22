#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED
#include "itemtype.h"

class SortedType{

    public:
        SortedType();
        void MakeEmpty();
        bool IsFull();
        int LengthIs();
        void ResetList();
        void GetNextItem(ItemType&);
        void InsertItem(ItemType);
        void RetrieveItem(ItemType&, bool&);
        void DeleteItem(ItemType);
        void PrintTheList();

    private:
        int length;
        ItemType info[MAX_ITEMS];
        int currentPos;
};

#endif // SORTEDTYPE_H_INCLUDED
