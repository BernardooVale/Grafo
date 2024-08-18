#include <iostream>
#include "Vertice.hpp"

Vertice::Vertice(int id) {

	this->id = id;
	this->arestas = nullptr;
	this->prox = nullptr;

}

Vertice::~Vertice() {

	if(this != nullptr){

		delete this->prox;
		this->prox = nullptr;

		delete this->arestas;
		this->arestas = nullptr;
	}
}

void Vertice::ImprimeVizinhanca() {

	Aresta* aux = this->arestas;
	while (aux != nullptr) {

		std::cout << aux->pegaID() << " ";
		aux = aux->proximo();
	}

	std::cout << std::endl;
}

void Vertice::Insere(Vertice* novo) {

	if (this->prox == nullptr) {
		this->prox = novo;
	}
	else {
		this->prox->Insere(novo);
	}
}

void Vertice::InsereVizinho(int id) {
	
	Aresta* nova = new Aresta(id);

	if (this->arestas == nullptr) {
		this->arestas = nova;
	}
	else {
		this->arestas->InsereAresta(nova);
	}
}


int Vertice::pegaID() {
	return this->id;
}

int Vertice::rank() {

	Aresta* aux = this->arestas;
	int i = 0;

	while (aux != nullptr){

		i++;
		aux = aux->proximo();
	}
	return i;
}

Vertice* Vertice::proximo() {
	return this->prox;
}