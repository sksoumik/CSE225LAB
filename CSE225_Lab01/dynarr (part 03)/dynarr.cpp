#include "dynarr.h"
#include <iostream>
using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}

dynArr::dynArr(int s)
{
    data = new int*[s];

    for(int i = 0; i < s; i++)
    {
        data[i] = new int[5];
    }

    size = s;
}

dynArr::~dynArr()
{
    for(int i = 0; i < size; i++)
        delete [] data[i];
    delete [] data;
}

void dynArr::allocate(int s)
{
    data = new int*[s];

    for(int i = 0; i < s; i++)
    {
        data[i] = new int[5];
    }

    size = s;
}

int dynArr::get(int row, int colum)
{
    return data[row][colum];
}

void dynArr::set(int row, int colum, int value)
{
    data[row][colum] = value;
}
