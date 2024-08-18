#include "Aresta.hpp"

Aresta::Aresta(int id) {

	this->id_destino = id;
	this->prox = nullptr;
}

Aresta::~Aresta() {

	if(this != nullptr){
		delete this->prox;
		this->prox = nullptr;
	}
}

int Aresta::pegaID() {
	return this->id_destino;
}

void Aresta::InsereAresta(Aresta* nova) {

	if (this->prox == nullptr) {
		this->prox = nova;
	}
	else {
		this->prox->InsereAresta(nova);
	}
}

Aresta* Aresta::proximo() {
	return this->prox;
}