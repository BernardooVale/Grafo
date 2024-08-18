#ifndef LISTAADJACENCIA_HPP
#define LISTAADJACENCIA_HPP

#include "Vertice.hpp"

class ListaAdjacencia{

public:

	ListaAdjacencia();
	~ListaAdjacencia();

	void imprime(int i);
	void Insere();
	void InsereVizinho(int id_partida, int id_destino);

	int tamanho();
	int numArestas();

	int grauMin();
	int grauMax();

	Vertice* achaVertice(int id);

private:

	int tam;
	Vertice* cabeca;

};

#endif