#include "Grafo.hpp"
#include "Aresta.hpp"
#include <list>


#include<iostream>

Vertice* Grafo::adicionarVertice(){
	Vertice* v{new Vertice};
	this->vertices->push_back(v);
	return v;
}

void Grafo::removerVertice(Vertice* v){
    std::list<Vertice* const>::iterator it;
    for(it=this->vertices->begin();it!=this->vertices->end();it++){
        if(*it==v) vertices->erase(it);
    }
}

Aresta* Grafo::adicionarAresta(Vertice* const v2){
    return this->adicionarAresta(v2);
}

void Grafo::removerAresta(Aresta* a){
	Vertice* v1{a->getVertice1()};
	Vertice* v2{a->getVertice2()};
    v1->removerAresta(a);
    v2->removerAresta(a);
}

const std::list<Vertice* const>* Grafo::getVertices() const{
    return vertices;
}

void Grafo::imprimirGrafo() const{
    std::list<Vertice* const>::const_iterator it;
    for (it=vertices->begin(); it!=vertices->end(); it++){
        std::cout<< "O Vértice " << (*it)->getId() << " é adjacente a " << std::endl;
        (*it)->imprimirAdjacentes();
    }

}

