#include <iostream>
#include "ListaAdjacencia.hpp"

#define INT_MAX 2147483647
#define INT_MIN -2147483648

ListaAdjacencia::ListaAdjacencia() {

	this->cabeca = nullptr;
	this->tam = 0;
}

ListaAdjacencia::~ListaAdjacencia() {

	delete this->cabeca;
	this->cabeca = nullptr;
}

void ListaAdjacencia::Insere() {

	Vertice* aux = new Vertice(this->tam);

	if (this->cabeca == nullptr) {
		this->cabeca = aux;
	}
	else {
		this->cabeca->Insere(aux);
	}

	tam++;
}

Vertice* ListaAdjacencia::achaVertice(int id) {

	Vertice* aux = this->cabeca;

	while (aux->pegaID() != id) aux = aux->proximo();

	return aux;
}

void ListaAdjacencia::InsereVizinho(int id_partida, int id_destino) {

	Vertice* aux = this->achaVertice(id_partida);

	aux->InsereVizinho(id_destino);
}

int ListaAdjacencia::tamanho() {

	Vertice* aux = this->cabeca;
	int i = 0;

	while (aux != nullptr) {
		i++;
		aux = aux->proximo();
	}

	return i;
}

int ListaAdjacencia::numArestas() {

	Vertice* aux = this->cabeca;
	int i = 0;

	while (aux != nullptr) {
		i+= aux->rank();
		aux = aux->proximo();
	}

	return i;
}

void ListaAdjacencia::imprime(int id) {

	Vertice* aux = this->achaVertice(id);
	aux->ImprimeVizinhanca();
}

int ListaAdjacencia::grauMin() {

	Vertice* aux = this->cabeca;
	int i = INT_MAX;

	while (aux != nullptr) {

		if (aux->rank() < i) i = aux->rank();
		aux = aux->proximo();
	}

	return i;
}

int ListaAdjacencia::grauMax() {

	Vertice* aux = this->cabeca;
	int i = INT_MIN;

	while (aux != nullptr) {

		if (aux->rank() > i) i = aux->rank();
		aux = aux->proximo();
	}

	return i;
}