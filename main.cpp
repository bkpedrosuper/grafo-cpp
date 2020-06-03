#include <iostream>
#include <list>

int main(){
    
    std::list<int> a;

    a.push_back(1);
    a.push_back(1);
    a.push_back(1);

    std::list<int>::iterator it = a.begin();

    for ( ; it!=a.end(); it++){
        std::cout << (*it) << std::endl;
    }

}