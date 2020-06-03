#ifndef ARESTA_HPP
#define ARESTA_HPP

#include "Vertice.hpp"

class Vertice;

class Aresta{
    friend class Vertice;
    public:
        Aresta(Vertice* vetice1, Vertice* vertice2);

        Vertice* getVertice1();
        Vertice* getVertice2();
    private:
        Vertice* vertice1;
        Vertice* vertice2;

};

#endif