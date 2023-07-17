#ifndef PILHA
#define PILHA
#include "ListaBase.h"
class Pilha {
    private:

    ListaBase lista;

    public:

    Pilha(){
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
        bool achou = false;
            Elemento* inicio = lista.getInicio();
            if(inicio){
                Elemento* prox = inicio;
                while(!achou && prox->getProximo() != nullptr){
                    if(!prox->getProximo()->getProximo()){
                        Elemento* ultimo = prox->getProximo();
                        prox->setProximo(nullptr);
                        delete ultimo;
                        achou = true;
                    } else {
                        prox = prox->getProximo();
                    }
                }
            }
        
        if(achou){
            return 1;
        }
        return 0;
    }
};
#endif