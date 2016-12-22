#include <iostream>
#include "binarysearchtree.h"
#include "binarysearchtree.cpp"
using namespace std;

int main()
{
    TreeType<int> x;

    if(x.IsEmpty() == true)
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    int a = 4, b = 9, c = 2, d = 7, e = 3, f = 11, g = 17, h = 0, i = 5, j = 1;

    x.InsertItem(a);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);
    x.InsertItem(e);
    x.InsertItem(f);
    x.InsertItem(g);
    x.InsertItem(h);
    x.InsertItem(i);
    x.InsertItem(j);

    if(x.IsEmpty() == true)
        cout << "Tree is empty" << endl;
    else
        cout << "Tree is not empty" << endl;

    cout << x.LengthIs() << endl;

    bool found;
    x.RetrieveItem(b, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    int k = 13;
    x.RetrieveItem(k, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x.Print();
    cout << endl;

    x.ResetTree(PRE_ORDER);
    int item;
    bool finish = false;
    while(!finish){
        x.GetNextItem(item, PRE_ORDER, finish);
        cout << item << " ";
    }
    cout << endl;

    x.ResetTree(POST_ORDER);
    finish = false;
    while(!finish){
        x.GetNextItem(item, POST_ORDER, finish);
        cout << item << " ";
    }
    cout << endl;

    x.MakeEmpty();

    a = 8, b = 3, c = 10, d = 1, e = 6, f = 14, g = 4, h = 7, i = 13;
    x.InsertItem(a);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);
    x.InsertItem(e);
    x.InsertItem(f);
    x.InsertItem(g);
    x.InsertItem(h);
    x.InsertItem(i);

    //x.Print();
    cout << x.findMin() << endl;
    cout << x.numLeaves() << endl;

    return 0;
}
