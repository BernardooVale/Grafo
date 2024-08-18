// PAs.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//
#include "Grafo.hpp"
#include <iostream>

void dadosBasicos(Grafo* grafo) {

    std::cout << grafo->QuantidadeVertices() << std::endl;
    std::cout << (grafo->QuantidadeArestas() / 2) << std::endl;
    std::cout << grafo->GrauMinimo() << std::endl;
    std::cout << grafo->GrauMaximo() << std::endl;
}

void vizinhancas(Grafo* grafo, int num_vertices) {

    for (int i = 0; i < num_vertices; i++) {
        grafo->ImprimeVizinhos(i);
    }

}

void grafoCompleto(Grafo* grafo) {

    int grafoC = (grafo->QuantidadeVertices() - 1) * grafo->QuantidadeVertices();

    std::cout << (grafo->QuantidadeArestas() == grafoC ? "1" : "0") << std::endl;
}

int main(int argc, char* argv[]) {

    int num_vertices, num_arestas, id_aresta;
    Grafo* grafo = new Grafo();

    std::cin >> num_vertices;

    for (int i = 0; i < num_vertices; i++)
        grafo->InsereVertice();

    for (int i = 0; i < num_vertices; i++) {

        std::cin >> num_arestas;

        for (int j = 0; j < num_arestas; j++) {

            std::cin >> id_aresta;
            grafo->InsereAresta(i, id_aresta);
        }
    }

    std::string operation = argv[1];

    if (operation == "-d") {
        dadosBasicos(grafo);
    } else if (operation == "-n") {
        vizinhancas(grafo, num_vertices);
    } else if (operation == "-k") {
        grafoCompleto(grafo);
    }
    
    delete grafo;
    return 0;
}