#ifndef GRAPHO_HPP
#define GRAPHO_HPP

#include "ListaAdjacencia.hpp"

class Grafo {

public:
    Grafo();
    ~Grafo();
    void InsereVertice();
    void InsereAresta(int v, int w);
    int QuantidadeVertices();
    int QuantidadeArestas();
    int GrauMinimo();
    int GrauMaximo();
    void ImprimeVizinhos(int v);

private:
    ListaAdjacencia vertices;
};


#endif