#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <list>
#include <iostream>
#include "Aresta.hpp"

class Vertice{
    public:
        Vertice();

        unsigned int getId() const;
        Aresta* adicionarAresta(Vertice* const v2);
		void removerAresta(Aresta* a);
		void imprimirAdjacentes() const;

    private:
        static unsigned int proxId;
        unsigned int id;
        void adicionarAresta(const Aresta* const aresta);
        std::list<const Aresta*> arestas;
};


#endif