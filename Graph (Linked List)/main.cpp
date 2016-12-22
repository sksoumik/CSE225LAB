#include <iostream>
#include "graphtype.h"
#include "graphtype.cpp"
using namespace std;

int main()
{
    GraphType<string> x;

    x.AddVertex("Atlanta");
    x.AddVertex("Austin");
    x.AddVertex("Chicago");
    x.AddVertex("Dallas");
    x.AddVertex("Denver");
    x.AddVertex("Houston");
    x.AddVertex("Washington");

    x.AddEdge(0, 5, 800);
    x.AddEdge(0, 6, 600);
    x.AddEdge(1, 3, 200);
    x.AddEdge(1, 5, 160);
    x.AddEdge(2, 4, 1000);
    x.AddEdge(3, 1, 200);
    x.AddEdge(3, 2, 900);
    x.AddEdge(3, 4, 780);
    x.AddEdge(4, 0, 1400);
    x.AddEdge(4, 2, 1000);
    x.AddEdge(5, 0, 800);
    x.AddEdge(6, 0, 600);
    x.AddEdge(6, 3, 1300);

    x.PrintTheGraph();

    return 0;
}
