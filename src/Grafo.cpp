#include "Grafo.hpp"

Grafo::Grafo() {

	this->vertices = ListaAdjacencia();

}

Grafo::~Grafo() {

	this->vertices.~ListaAdjacencia();

}

void Grafo::InsereVertice() {

	this->vertices.Insere();
}

void Grafo::InsereAresta(int id_partida, int id_destino) {

	this->vertices.InsereVizinho(id_partida, id_destino);
}

void Grafo::ImprimeVizinhos(int id) {

	this->vertices.imprime(id);
}

int Grafo::QuantidadeArestas() {

	return this->vertices.numArestas();
}

int Grafo::QuantidadeVertices() {

	return this->vertices.tamanho();
}

int Grafo::GrauMinimo() {

	return this->vertices.grauMin();
}

int Grafo::GrauMaximo() {

	return this->vertices.grauMax();
}