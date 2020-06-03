#include "Vertice.hpp"
#include<iostream>

unsigned int Vertice::proxId{0};

Vertice::Vertice(){
	id = proxId++;
}

unsigned int Vertice::getId() const{
    return id;
}

Aresta* Vertice::adicionarAresta(Vertice* const v2){
    Aresta* a{new Aresta{this, v2}};
    this->adicionarAresta(a);
    v2->adicionarAresta(a);
    return a;
}

void Vertice::adicionarAresta(const Aresta* const aresta){
	this->arestas.push_back(aresta);
}

void Vertice::removerAresta(Aresta* a){
    if(a->getVertice1() != this && a->getVertice2() != this){
		std::cout<< "Aresta não pertence a esse Vértice"<< std::endl;
		return;
	}
	a->getVertice1()->arestas.remove(a);
	if(a->getVertice1() != a->getVertice2())
		a->getVertice2()->arestas.remove(a);
	delete a;
}

void Vertice::imprimirAdjacentes() const{
    std::list<const Aresta*>::const_iterator it;
    for (it = arestas.begin(); it!=arestas.end() ; it++){
        if (this==(*it)->getVertice1()){
            std::cout << (*it)->getVertice2()->getId() << " ";
        }
        else{
            std::cout << (*it)->getVertice1()->getId() << " ";

        }
    }

}