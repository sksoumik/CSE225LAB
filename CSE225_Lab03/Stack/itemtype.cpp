#include "ItemType.h"

ItemType::ItemType(){
    value = 0;
}

void ItemType::Initialize(int number){
    value = number;
}

void ItemType::Print(){
    cout << value << " ";
}

int ItemType::getValue(){
    return value;
}
