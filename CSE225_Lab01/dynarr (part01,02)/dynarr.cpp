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
    data = new int[s];
    size = s;
}

dynArr::~dynArr()
{
    delete [] data;
}

void dynArr::allocate(int s)
{
    data = new int[s];
    size = s;
}

int dynArr::get(int index)
{
    return data[index];
}

void dynArr::set(int index, int value)
{
    data[index] = value;
}
