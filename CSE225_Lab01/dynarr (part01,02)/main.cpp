#include "dynarr.h"
#include <iostream>
using namespace std;

int main()
{
    dynArr d1;
    dynArr d2(5);

    for(int i = 0, number = 0; i < 5; i++)
    {
        cin >> number;
        d2.set(i, number);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << d2.get(i) << " " << endl;
    }

    d2.allocate(10);

    for(int i = 0, number = 0; i < 10; i++)
    {
        cin >> number;
        d2.set(i, number);
    }

    for(int i = 0; i < 10; i++)
    {
        cout << d2.get(i) << " " << endl;
    }

    return 0;
}
