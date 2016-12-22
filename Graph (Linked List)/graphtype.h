#ifndef GRAPHTYPE_H_INCLUDED
#define GRAPHTYPE_H_INCLUDED

template <class VertexType>
class GraphType{

    struct EdgeType{
        int index;
        int weight;
        EdgeType* next;
    };

    struct VerticesType{
        VertexType vertexName;
        EdgeType* ptr;
    };

    public:
        GraphType();
        GraphType(int maxV);
        ~GraphType();
        void AddVertex(VertexType);
        void AddEdge(int, int, int);
        void PrintTheGraph();

    private:
        int numVertices;
        int maxVertices;
        VerticesType* vertices;
        //EdgeType edges;
};

#endif // GRAPHTYPE_H_INCLUDED
