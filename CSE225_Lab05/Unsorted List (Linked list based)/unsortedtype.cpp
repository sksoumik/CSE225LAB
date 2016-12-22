#include <iostream>
#include "unsortedtype.h"

using namespace std;

template <class ItemType>
UnsortedType<ItemType>::UnsortedType(){
    length = 0;
    listData = NULL;
    currentPos = NULL;
}

template <class ItemType>
int UnsortedType<ItemType>::LengthIs(){
    return length;
}

template <class ItemType>
bool UnsortedType<ItemType>::IsFull(){
    NodeType* location;
    try{
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception){
        return true;
    }
}

template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType item){
    NodeType* location;
    location = new NodeType;
    location->info = item;
    location->next = listData;
    listData = location;
    length++;
}

template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType item){
    NodeType* location = listData;
    NodeType* tempLocation;

    if(item == listData->info){
        tempLocation = location;
        listData = listData->next;
    }
    else{
        while(!(item == (location->next)->info))
            location = location->next;
        tempLocation = location->next;
        location->next = (location->next)->next;
    }

    delete tempLocation;
    length--;
}

template <class ItemType>
void UnsortedType<ItemType>::RetrieveItem(ItemType& item, bool& found){
    NodeType* location = listData;
    bool moreToSearch = (location != NULL);
    found = false;

    while(moreToSearch && !found){
        if(item == location->info)
            found = true;
        else{
            location = location->next;
            moreToSearch = (location != NULL);
        }
    }
}

template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty(){
    NodeType* tempPtr;

    while(listData != NULL){
        tempPtr = listData;
        listData = listData->next;
        delete tempPtr;
    }
    length = 0;
}

template <class ItemType>
UnsortedType<ItemType>::~UnsortedType(){
    MakeEmpty();
}

template <class ItemType>
void UnsortedType<ItemType>::ResetList(){
    currentPos = NULL;
}

template <class ItemType>
void UnsortedType<ItemType>::GetNextItem(ItemType& item){
    if(currentPos == NULL)
        currentPos = listData;
    else
        currentPos = currentPos->next;

    item = currentPos->info;
}

/*
template <class ItemType>
void UnsortedType<ItemType>::ReversePrintTheList(NodeType* head){
    if(head==NULL) return ;
    ReversePrintTheList(head->next);
    cout<<head->info<<" ";
}

template <class ItemType>
void UnsortedType<ItemType>::PrintTheList(NodeType* head){
    if(head==NULL) return ;
    cout<<head->info<<" ";
    PrintTheList(head->next);
}

template <class ItemType>
void UnsortedType<ItemType>::PrintTheList(){
    NodeType* head = listData;
    cout<<"Reverse Order: ";
    ReversePrintTheList(head);
    cout<<endl;
    NodeType* newHead = listData;
    cout<<"Inserted Order: ";
    PrintTheList(newHead);
}
*/

template <class ItemType>
void UnsortedType<ItemType>::PrintTheList(){
    UnsortedType<ItemType> y;
    NodeType *tempPtr1;
    tempPtr1 = listData;

    while(tempPtr1 != NULL){
        y.InsertItem(tempPtr1->info);
        tempPtr1 = tempPtr1->next;
    }

    NodeType *tempPtr2;
    tempPtr2 = y.listData;

    while(tempPtr2 != NULL){
        cout << tempPtr2->info << " ";
        tempPtr2 = tempPtr2->next;
    }
}
