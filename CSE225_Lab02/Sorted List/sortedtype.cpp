#include "sortedtype.h"
#include <iostream>

using namespace std;

SortedType::SortedType(){
    length = 0;
    currentPos = -1;
}

void SortedType::MakeEmpty(){
    length = 0;
}

bool SortedType::IsFull(){
    return (length == MAX_ITEMS);
}

int SortedType::LengthIs(){
    return length;
}

void SortedType::ResetList(){
    currentPos = -1;
}

void SortedType::GetNextItem(ItemType& item){
    currentPos++;
    item = info[currentPos];
}

//edit
void SortedType::InsertItem(ItemType item){
    int location = 0;
    bool moreTosearch = (location < length);

    while(moreTosearch){
        switch(item.ComparedTo(info[location])){
        case GREATER:
            location++;
            moreTosearch = (location < length);
            break;
        case LESS:
            moreTosearch = false;
            break;
        }
    }

    for(int index = length; index > location; index--)
        info[index] = info[index - 1];

    info[location] = item;
    length++;
}

//edit
void SortedType::DeleteItem(ItemType item){
    int location = 0;

    while(item.ComparedTo(info[location]) != EQUAL)
        location++;

    for(int index = location + 1; index < length; index++)
        info[index - 1] = info[index];

    length--;
}

//edit
void SortedType::RetrieveItem(ItemType& item, bool& found){
    int midPoint, first = 0, last = length - 1;
    bool moreTosearch = first <= last;
    found = false;

    while(moreTosearch && !found){
        midPoint = (first + last) / 2;

        switch(item.ComparedTo(info[midPoint])){
            case LESS:
                last = midPoint - 1;
                moreTosearch = first <= last;
                break;
            case GREATER:
                first = midPoint + 1;
                moreTosearch = first <= last;
                break;
            case EQUAL:
                found = true;
                item = info[midPoint];
                break;
        }
    }
}

void SortedType::PrintTheList(){
    for(int i = 0; i < length; i++)
        info[i].Print();
}
