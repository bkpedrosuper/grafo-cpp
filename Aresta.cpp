#include "Aresta.hpp"

Aresta::Aresta(Vertice* vetice1, Vertice* vertice2): vertice1{vertice1},
                                                     vertice2{vertice2} {}


Vertice* Aresta::getVertice1() const{
	return vertice1;
}

Vertice* Aresta::getVertice2() const{
    return vertice2;
}