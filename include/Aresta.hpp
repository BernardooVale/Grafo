#ifndef ARESTAS_HPP
#define ARESTAS_HPP

class Aresta{

public:

	Aresta(int id);
	~Aresta();

	void InsereAresta(Aresta* nova);

	int pegaID();

	Aresta* proximo();

private:

	int id_destino;
	Aresta* prox;

};

#endif