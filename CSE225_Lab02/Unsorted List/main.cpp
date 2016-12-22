#include <iostream>
#include "unsortedtype.h"

using namespace std;

int main()
{
    //task 01
    UnsortedType x;

    ItemType a, b, c, d;
    a.Initialize(5);
    b.Initialize(7);
    c.Initialize(6);
    d.Initialize(9);

    x.InsertItem(a);
    x.InsertItem(b);
    x.InsertItem(c);
    x.InsertItem(d);

    x.PrintTheList();
    cout << "\n" << x.LengthIs() << endl;

    ItemType e;
    e.Initialize(1);
    x.InsertItem(e);
    x.PrintTheList();
    cout << "\n" << endl;

    //task 02
    ItemType f, g;
    bool found;

    f.Initialize(4);
    g.Initialize(10);

    x.RetrieveItem(f, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x.RetrieveItem(a, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x.RetrieveItem(d, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    x.RetrieveItem(g, found);
    if(found == true)
        cout << "Item is found" << endl;
    else
        cout << "Item is not found" << endl;

    if(x.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    cout << endl;

    //task 03
    x.DeleteItem(a);
    if(x.IsFull() == true)
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    x.DeleteItem(e);
    x.PrintTheList();
    cout << endl;

    x.DeleteItem(c);
    x.PrintTheList();

    return 0;
}
