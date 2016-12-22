#include "Triangle.h"
#include <iostream>
#include <math.h>
using namespace std;

template <class T>
Triangle<T>::Triangle()
{
    base = 0;
    height = 0;
}

template <class T>
void Triangle<T>::setBase(T bse)
{
    base = bse;
}

template <class T>
void Triangle<T>::setHeight(T hgt)
{
    height = hgt;
}

template <class T>
T Triangle<T>::getHypotenuse()
{
    return sqrt(base * base + height * height);
}

template <class T>
T Triangle<T>::getArea()
{
    return 0.5 * base * height;
}
