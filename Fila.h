#ifndef FILA
#define FILA
#include "ListaBase.h"
class Fila {

private: 
    ListaBase lista;

public:

    Fila(){
        lista = ListaBase();
    }

    int add(int valor){
        return lista.add(valor);
    }

    Elemento* peek(int valor){
        return lista.peek(valor);
    }

    void imprime(){
        lista.imprime();
    }

    int remove(){
        Elemento* inicio = lista.getInicio();
        if(inicio){
            Elemento* proximo = inicio->getProximo();
            if(proximo){
                lista.setInicio(proximo);
                return 1;
            } else {
                lista.setInicio(nullptr);
            }
        }
        return 0;        
    }

};

#endif