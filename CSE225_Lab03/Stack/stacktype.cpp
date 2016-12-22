#include "stacktype.h"

StackType::StackType(){
    top = - 1;
}

bool StackType::IsEmpty(){
    return (top == - 1);
}

bool StackType::IsFull(){
    return (top == MAX_ITEMS - 1);
}

void StackType::Push(ItemType newItem){
    if(IsFull())
        throw FullStack();

    top++;
    items[top] = newItem;
}

void StackType::Pop(){
    if(IsEmpty())
        throw EmptyStack();

    top--;
}

ItemType StackType::Top(){
    if(IsEmpty())
        throw EmptyStack();

    return items[top];
}

void StackType::PrintStack(){
    for(int i = top; i != -1; i--)
        items[i].Print();
}

int StackType::sumOdd(StackType s){
    int sum = 0;

    //cout << "top: " << top << endl;
    //cout << "top: " << s.top << endl;

    for(int i = 0; i <= s.top; i++){
        if(s.items[i].getValue() % 2 == 1){
           //cout << s.items[i].getValue() << " ";
           sum = sum + s.items[i].getValue();
        }
    }

    return sum;
}
