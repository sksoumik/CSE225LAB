#include "dynarr.h"
#include <iostream>
using namespace std;

int main()
{
    dynArr d1;
    dynArr d2(2);

    for(int i = 0, number = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cin >> number;
            d2.set(i, j, number);
        }
    }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << d2.get(i, j) << " " << endl;
        }
    }

    return 0;
}
