#include <iostream>
#include "graphtype.h"
using namespace std;

template <class VertexType>
GraphType<VertexType>::GraphType()
{
    numVertices = 0;
    maxVertices = 10;

    vertices = new VerticesType[maxVertices];
    //for(int i = 0; i < maxVertices; i++)
    //vertices[i]->ptr = NULL;
}

template <class VertexType>
GraphType<VertexType>::GraphType(int maxV)
{
    numVertices = 0;
    maxVertices = maxV;

    vertices = new VerticesType[maxVertices];
    //for(int i = 0; i < maxVertices; i++)
    //vertices[i]->ptr = NULL;
}

template <class VertexType>
GraphType<VertexType>::~GraphType()
{
    delete[] vertices;
}

template <class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertexN)
{
    vertices[numVertices].vertexName = vertexN;
    vertices[numVertices].ptr = NULL;

    numVertices++;
}

template <class VertexType>
void GraphType<VertexType>::AddEdge(int fromVertexInd, int toVertexInd, int w)
{
    EdgeType* edges;
    edges = new EdgeType;
    edges->index = toVertexInd;
    edges->weight = w;
    edges->next = NULL;

    if(vertices[fromVertexInd].ptr == NULL)
    {
        vertices[fromVertexInd].ptr = edges;
    }
    else
    {
        EdgeType* head;
        head = vertices[fromVertexInd].ptr;
       // cout<<head->index<<" "<<head->weight<<" "<<head->next<<endl;
        while(head->next != NULL)
            head = head->next;

        head->next = edges;
    }
}

template <class VertexType>
void GraphType<VertexType>::PrintTheGraph()
{
    for(int i = 0; i < numVertices; i++)
    {
        cout << i << ". " << vertices[i].vertexName << " :\t";

        EdgeType* tempPtr;
        tempPtr = vertices[i].ptr;
        while(tempPtr != NULL)
        {
            cout << "(" << tempPtr->index << "," << vertices[tempPtr->index].vertexName << "," << tempPtr->weight << ")   ";
            tempPtr = tempPtr->next;
        }

        cout << "\n" <<endl;
    }
}
