#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <list>

#include "Vertice.hpp"
#include "Aresta.hpp"

class Grafo{
	public:
		Grafo();
		~Grafo();

		Vertice* adicionarVertice();
		void removerVertice(Vertice* v);
		Aresta* adicionarAresta(Vertice* const v1, Vertice* const v2);
		void removerAresta(Aresta* a);
		void imprimirGrafo() const;
		const std::list<Vertice* const>* getVertices() const;
	private:
		std::list<Vertice* const>* vertices;
};
#endif
