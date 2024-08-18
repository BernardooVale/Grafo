#ifndef VERTICE_HPP
#define VERTICE_HPP

#include "Aresta.hpp"

class Vertice{

public:

	Vertice(int id);
	~Vertice();

	void Insere(Vertice* novo);

	void ImprimeVizinhanca();
	void InsereVizinho(int id_vizinho);

	int pegaID();
	int rank();

	Vertice* proximo();

private:

	int id;
	Aresta* arestas;
	Vertice* prox;

};

#endif