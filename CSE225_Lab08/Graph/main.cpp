#include <iostream>
#include "graphtype.h"
#include "heaptype.cpp"
using namespace std;

int main()
{
    GraphType<char> graph;

    char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E', f = 'F', g = 'G', h = 'H';

    graph.AddVertex(a);
    graph.AddVertex(b);
    graph.AddVertex(c);
    graph.AddVertex(d);
    graph.AddVertex(e);
    graph.AddVertex(f);
    graph.AddVertex(g);
    graph.AddVertex(h);

    graph.AddEdge(a, b, 1);
    graph.AddEdge(a, c, 1);
    graph.AddEdge(a, d, 1);
    graph.AddEdge(b, a, 1);
    graph.AddEdge(d, a, 1);
    graph.AddEdge(d, e, 1);
    graph.AddEdge(d, g, 1);
    graph.AddEdge(f, h, 1);
    graph.AddEdge(g, f, 1);
    graph.AddEdge(h, e, 1);

    cout << graph.OutDegree(d) << endl;

    if(graph.FoundEdge(a, d))
        cout << "There is an edge" << endl;
    else
        cout << "There is no edge" << endl;

    if(graph.FoundEdge(b, d))
        cout << "There is an edge" << endl;
    else
        cout << "There is no edge" << endl;

    graph.DepthFirstSearch(b, e);
    graph.BreadthFirstSearch(e, b);
    graph.BreadthFirstSearch(b, e);
    graph.BreadthFirstSearch(e, b);

    return 0;
}
