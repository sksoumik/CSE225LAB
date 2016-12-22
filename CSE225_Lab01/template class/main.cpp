#include "Triangle.h"
#include "Triangle.cpp"
#include <iostream>

using namespace std;

int main()
{
    Triangle<int> t1;
    Triangle<double> t2;

    t1.setBase(4);
    t1.setHeight(3);
    t2.setBase(4.5);
    t2.setHeight(3.5);

    cout << t1.getHypotenuse() << endl;
    cout << t2.getHypotenuse() << endl;

    cout << t1.getArea() << endl;
    cout << t2.getArea() << endl;

    return 0;
}
